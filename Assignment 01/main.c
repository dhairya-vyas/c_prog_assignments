#include <stdio.h>

int main() {

    int first,second,sum,diff,product;

    printf("C program to print Sum, Product & Difference of any given 2 Numbers :- \n");
    printf("------------------------------------");

    printf("\n Enter the first number:-  " );
    scanf("%d",&first);
    printf("\n Enter the second number:-  " );
    scanf("%d",&second);

    sum = first + second;
    printf("\n Sum of the 2 numbers is:-  %d", sum);

    product = first * second;
    printf("\n Product of the 2 numbers is:-  %d", product);

    diff = first - second;
    printf("\n Difference of the 2 numbers is:-  %d", diff);


    return 0;
}