#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int char_count = 0, line_count = 0, space_count = 0, tab_count = 0;
    
    fp = fopen("example.txt", "r"); // Replace example.txt with the name of your file
    
    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }
    
    while ((ch = fgetc(fp)) != EOF) {
        char_count++;
        
        if (ch == '\n') {
            line_count++;
        }
        else if (ch == ' ') {
            space_count++;
        }
        else if (ch == '\t') {
            tab_count++;
        }
    }
    
    fclose(fp);
    
    printf("Number of characters: %d\n", char_count);
    printf("Number of lines: %d\n", line_count);
    printf("Number of spaces: %d\n", space_count);
    printf("Number of tabs: %d\n", tab_count);
    
    return 0;
}
