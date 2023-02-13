#include<stdio.h>

int main(){

    float num1,num2,ans ;
    printf("C program to calculate division of 2 numbers:- \n");
    printf("------------------------------------");
    
    printf("\n Enter the number:- ");
    scanf("%f",&num1);
    printf("\n Enter the number with which you want to divide:- ");    
    scanf("%f",&num2);
    
    if(num2 == 0) {
        printf("\n The number %f cannot be divided by zero", num1,ans);
    }
    else {
        ans = num1 / num2;
        printf("\n The answer is:- %f" , ans);
    }

return 0;

}