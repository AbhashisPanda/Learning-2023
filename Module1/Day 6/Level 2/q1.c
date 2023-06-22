#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char id[3];
    float temperature;
    int humidity;
    int light_intensity;
} SensorData;

void parse_data(char *data_string, SensorData *sensor_data) {
 
    char *sensor_info = strtok(data_string, "-");

   
    while (sensor_info != NULL) {
       
        char *sensor_id = strtok(sensor_info, ":");
        char *data = strtok(NULL, ":");

      
        SensorData sensor;

       
        strcpy(sensor.id, sensor_id);

     
        char *token = strtok(data, ",");
        while (token != NULL) {
            char *key = token;
            char *value = strchr(token, ':') + 1;

            if (strcmp(key, "T") == 0) {
                sensor.temperature = atof(value);
            } else if (strcmp(key, "H") == 0) {
                sensor.humidity = atoi(value);
            } else if (strcmp(key, "L") == 0) {
                sensor.light_intensity = atoi(value);
            }

            token = strtok(NULL, ",");
        }
        *sensor_data++ = sensor;
        sensor_info = strtok(NULL, "-");
    }
}

int main() {
    char data_string[100];
    SensorData sensor_data[1];

	printf("Enter the data string: ");
    fgets(data_string, 100, stdin);
    data_string[strcspn(data_string, "\n")] = 0;

    parse_data(data_string, sensor_data);

    printf("Sensor Info:\n");
    printf("---------------------\n");
    printf("Sensor ID: %s\n", sensor_data[0].id);
    printf("Temperature: %.1f C\n", sensor_data[0].temperature);
    printf("Humidity: %d\n", sensor_data[0].humidity);
    printf("Light Intensity: %d%%\n", sensor_data[0].light_intensity);

    return 0;
}