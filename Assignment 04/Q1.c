#include<stdio.h>
int main(){

    printf("C Program to find Factorial of a number");
    printf("\n --------------------------------------------------------- \n ");

    printf("Enter a number:");
    printf("\n The factorial of the given number is :- %d ",factorial());
}
    int factorial()
    {
        int num,i,factorial=1;
        scanf("%d", &num);
        for(i=1;i<=num;i++){
        factorial = factorial * i;
        
        }

    return factorial;
    }