#include <stdio.h>

int main() {
    int n, i, j, count, isPrime;
    printf("C Program to calculate the first 5 Prime numbers of the entered number \n");
    printf("----------------------------------------------- \n");

    printf("Enter a number: ");
    scanf("%d", &n);

    count = 0;
    i = n + 1;

    while (count < 5) {
        isPrime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
            count++;
        }

        i++;
    }

    return 0;
}
