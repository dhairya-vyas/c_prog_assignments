#include <stdio.h>

struct A {
    int x;
    double y;
    float z;
    char ch;
} a1;

int main() {
    printf("Address of a1 = %p\n", &a1);
    printf("Address of a1.x = %p\n", &a1.x);
    printf("Address of a1.y = %p\n", &a1.y);
    printf("Address of a1.z = %p\n", &a1.z);
    printf("Address of a1.ch = %p\n", &a1.ch);

    // Find the base address of a1 given the address of a member (e.g. a1.z)
    float *pz = &a1.z;
    uintptr_t offset = (uintptr_t)pz - (uintptr_t)&a1.z;
    uintptr_t base = (uintptr_t)pz - offset;
    printf("Base address of a1 = %p\n", (void*)base);

    return 0;
}
