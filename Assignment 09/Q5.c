#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct A {
    int x;
    char *str;
};

int main() {
    struct A a1 = {101, NULL}, a2;
    a1.x = 10;
    a1.str = strdup("hello"); // allocate memory for string

    scanf("%d", &a1.x);

    char buffer[100];
    scanf("%99s", buffer);
    a1.str = strdup(buffer); // allocate memory for string

    a2.x = a1.x;
    a2.str = strdup(a1.str); // allocate memory and copy string

    // deep copy of str array
    struct A a3 = {101, "abc"};
    strncpy(a3.str, "hello", sizeof(a3.str));

    // free allocated memory
    free(a1.str);
    free(a2.str);

    return 0;
}
