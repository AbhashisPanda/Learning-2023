#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024
#define MAX_ENTRIES 100

struct LogEntry {
    int entryNo;
    char sensorNo[3];
    float temperature;
    int humidity;
    int light;
    char time[9];
};

int read_log_file(char* filename, struct LogEntry* logEntries, int* numEntries) {
    FILE* fp;
    char line[MAX_LINE_LENGTH];
    char* token;
    int i = 0;

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    fgets(line, MAX_LINE_LENGTH, fp); // skip header line

    while (fgets(line, MAX_LINE_LENGTH, fp) != NULL && i < MAX_ENTRIES) {
        token = strtok(line, ",");
        logEntries[i].entryNo = atoi(token);
        token = strtok(NULL, ",");
        strncpy(logEntries[i].sensorNo, token, 3);
        token = strtok(NULL, ",");
        logEntries[i].temperature = atof(token);
        token = strtok(NULL, ",");
        logEntries[i].humidity = atoi(token);
        token = strtok(NULL, ",");
        logEntries[i].light = atoi(token);
        token = strtok(NULL, ",");
        strncpy(logEntries[i].time, token, 9);
        i++;
    }

    *numEntries = i;
    fclose(fp);
    return 0;
}

void print_log_entries(struct LogEntry* logEntries, int numEntries) {
    printf("EntryNo  SensorNo  Temperature  Humidity  Light  Time\n");
    for (int i = 0; i < numEntries; i++) {
        printf("%-8d%-10s%-14.2f%-10d%-7d%-8s\n", logEntries[i].entryNo, logEntries[i].sensorNo, logEntries[i].temperature, logEntries[i].humidity, logEntries[i].light, logEntries[i].time);
    }
}

int main() {
    struct LogEntry logEntries[MAX_ENTRIES];
    int numEntries = 0;

    if (read_log_file("data.csv", logEntries, &numEntries) == 0) {
        printf("Read %d entries from file.\n", numEntries);
        print_log_entries(logEntries, numEntries);
    }

    return 0;
}