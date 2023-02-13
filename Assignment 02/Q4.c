#include<stdio.h>

int main(){

    printf("C Program to check maximum of 2 numbers");
    printf("\n ---------------------------------------------------------");

    int num1,num2;
    printf("Enter the 1st number:- ");
    scanf("%d",&num1);
    printf("Enter the 2nd number:- ");
    scanf("%d",&num2);

    if(num1 > num2){
        printf ("The first number %d is greater than the second number %d",num1,num2);
    }
    else{
        printf ("The second number %d is greater than the first number %d",num2,num1);      
    }
return 0;
}    