#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;

    printf("List of names:\n");
    for (i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}
