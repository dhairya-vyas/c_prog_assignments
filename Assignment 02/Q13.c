#include<stdio.h>

int main(){

    printf("C Program to make a simple calculator");
    printf("\n --------------------------------------------------------- \n");

    char op;
    double num1,num2;
    printf("\n Enter the Operation(+ , - , * , / ):- ");
    scanf("%c",&op);
    printf("\n Enter the First Number:- ");
    scanf("%lf",&num1);
    printf("\n Enter the Second Number:- ");
    scanf("%lf",&num2);

    switch(op){
        case '+' : printf("%.1lf + %.1lf = %.1lf", num1 , num2, num1 + num2);
        break;
        case '-' : printf("%.1lf - %.1lf = %.1lf", num1 , num2, num1 - num2);
        break;       
        case '*' : printf("%.1lf * %.1lf = %.1lf", num1 , num2, num1 * num2);
        break;        
        case '/' : printf("%.1lf / %.1lf = %.1lf", num1 , num2, num1 / num2);
        break;
            
        default : printf(" Enter a valid Operation");            
        }

return 0;
}