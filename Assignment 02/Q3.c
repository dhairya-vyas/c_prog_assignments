#include<stdio.h>

int main(){

    printf("C Program to check if the number is Positive, Negative or Zero");
    printf("\n ---------------------------------------------------------");

    int num;
    printf("Enter the number:- ");
    scanf("%d",&num);

    if(num > 0){
        printf("The number %d is Positive", num);
    }

    else if(num == 0){
        printf("The number %d is Zero", num);
    }

    else{
        printf("The number %d is negative", num);
    }

    return 0;
}