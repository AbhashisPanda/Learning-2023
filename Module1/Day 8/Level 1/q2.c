#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define BUFFER_SIZE 4096

void print_usage() {
    printf("Usage: ./cp [-u | -l | -s] source_file destination_file\n");
}

int main(int argc, char *argv[]) {
    FILE *src_file, *dest_file;
    char src_filename[100], dest_filename[100];
    char buffer[BUFFER_SIZE];
    size_t n;
    int i, c, prev_c;
    int upper = 0, lower = 0, sentence = 0;

    // Parse the command-line arguments
    if (argc < 3 || argc > 4) {
        print_usage();
        exit(1);
    }
    if (argc == 4) {
        if (strcmp(argv[1], "-u") == 0) {
            upper = 1;
        } else if (strcmp(argv[1], "-l") == 0) {
            lower = 1;
        } else if (strcmp(argv[1], "-s") == 0) {
            sentence = 1;
        } else {
            print_usage();
            exit(1);
        }
        strcpy(src_filename, argv[2]);
        strcpy(dest_filename, argv[3]);
    } else {
        upper = 0;
        lower = 0;
        sentence = 0;
        strcpy(src_filename, argv[1]);
        strcpy(dest_filename, argv[2]);
    }

    // Open the source file for reading
    src_file = fopen(src_filename, "r");
    if (src_file == NULL) {
        printf("Error: Unable to open source file\n");
        exit(1);
    }

    // Open the destination file for writing
    dest_file = fopen(dest_filename, "w");
    if (dest_file == NULL) {
        printf("Error: Unable to open destination file\n");
        fclose(src_file);
        exit(1);
    }

    // Copy the contents of the source file to the destination file
    if (upper) {
        // Convert the contents to upper case
        while ((c = fgetc(src_file)) != EOF) {
            fputc(toupper(c), dest_file);
        }
    } else if (lower) {
        // Convert the contents to lower case
        while ((c = fgetc(src_file)) != EOF) {
            fputc(tolower(c), dest_file);
        }
    } else if (sentence) {
        // Convert the contents to sentence case
        prev_c = '.';
        while ((c = fgetc(src_file)) != EOF) {
            if (prev_c == '.' || prev_c == '\n' || prev_c == '\r') {
                fputc(toupper(c), dest_file);
            } else {
                fputc(tolower(c), dest_file);
            }
            prev_c = c;
        }
    } else {
        // Perform a normal copy
        while ((n = fread(buffer, 1, BUFFER_SIZE, src_file)) > 0) {
            fwrite(buffer, 1, n, dest_file);
        }
    }

    // Close the source and destination files
    fclose(src_file);
    fclose(dest_file);

    printf("File copied successfully.\n");

    return 0;
}