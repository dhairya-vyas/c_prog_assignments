#include <stdio.h>
int solve(int a, int b,int *sum,int *product){
    *sum = a + b;
    *product = a * b;
}

int main(){
    int num1 , num2;
    int product,sum;
    printf("C Program to calculate the sum & product into a single function using Pointer");
    printf("\n ---------------------------------------------------------");
    printf("\n Enter the 1st Number:- ");
    scanf("%d",&num1);
    printf("\n Enter 2nd Number:- ");
    scanf("%d",&num2);
    solve(num1, num2,&sum,&product);
    printf("a + b = %d and a * b = %d", sum, product);

    return 0;
}