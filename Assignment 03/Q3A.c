#include <stdio.h>

int main(){

    printf("C Program to print the sum of Digits of given number \n");
    printf("---------------------------------------------- \n");

    int i,n,sum=0,temp =0;
    printf("Enter the number:-- ");
    scanf("%d",&n);
    temp = n;

    while(n>0){
        i = n % 10;
        sum = sum + i;
        n = n / 10;    
    }
    printf("Sum of the digits of the number %d is equal to %d",temp,sum);
    return 0;
}