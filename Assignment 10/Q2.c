#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char filename1[50], filename2[50];
    char ch;

    // Get filenames from user
    printf("Enter name of source file: ");
    scanf("%s", filename1);
    printf("Enter name of destination file: ");
    scanf("%s", filename2);

    // Open source file
    fp1 = fopen(filename1, "r");
    if (fp1 == NULL) {
        printf("Unable to open the file %s\n", filename1);
        return 1;
    }

    // Open destination file
    fp2 = fopen(filename2, "w");
    if (fp2 == NULL) {
        printf("Unable to create the file %s\n", filename2);
        fclose(fp1);
        return 1;
    }

    // Copy contents of source file to destination file
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    // Close files
    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully.\n");

    return 0;
}
