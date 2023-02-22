#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
#define FILENAME "buffer.bin"

char buffer[BUFFER_SIZE] = {0};

void set_buffer() {
    printf("Enter a string to set the buffer: ");
    fgets(buffer, BUFFER_SIZE, stdin);
}

void print_buffer() {
    printf("Buffer: %s\n", buffer);
}

void save_buffer() {
    FILE *fp = fopen(FILENAME, "wb");
    if (fp == NULL) {
        printf("Error: could not open file %s for writing\n", FILENAME);
        return;
    }
    fwrite(buffer, sizeof(char), BUFFER_SIZE, fp);
    fclose(fp);
    printf("Buffer saved to file %s\n", FILENAME);
}

void load_buffer() {
    FILE *fp = fopen(FILENAME, "rb");
    if (fp == NULL) {
        printf("Error: could not open file %s for reading\n", FILENAME);
        return;
    }
    fread(buffer, sizeof(char), BUFFER_SIZE, fp);
    fclose(fp);
    printf("Buffer loaded from file %s\n", FILENAME);
}

int main() {
    int choice;
    load_buffer();

    do {
        printf("Menu:\n");
        printf("1. Set buffer\n");
        printf("2. Print buffer\n");
        printf("3. Save buffer to file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                set_buffer();
                break;
            case 2:
                print_buffer();
                break;
            case 3:
                save_buffer();
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}
