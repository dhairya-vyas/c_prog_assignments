#include<stdio.h>

int main(){

    printf("C Program to check maximum of 3 numbers");
    printf("\n ---------------------------------------------------------");

    int num1,num2,num3;
    printf("\n Enter the 1st number:- ");
    scanf("%d",&num1);
    printf("\n Enter the 2nd number:- ");
    scanf("%d",&num2);
    printf("\n Enter the 3rd number:- ");
    scanf("%d",&num3);

    if(num1 > num2 && num1 > num3){
        printf ("The first number %d is greater than the second number %d & the third number %d",num1,num2,num3);
    }
    else if (num2 > num1 && num2 > num3){
        printf("The second number %d is greater than the first number %d & the third number %d",num2,num1,num3);
    }
    else{
        printf ("The third number %d is greater than the first number %d & the second number %d",num3,num1,num2);      
    }
return 0;
}    