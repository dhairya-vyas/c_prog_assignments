#include<stdio.h>

float add(float num1,float num2);
float sub(float num1,float num2);
float multi(float num1,float num2);
float div(float num1,float num2);

int main()
{
    char op;
    float num1,num2,result=0.0f;

    printf("C Program to make a simple calculator \n");
    printf("---------------------------------------- \n");

    printf("Enter the 1st Number:-");
    scanf("%f",&num1);
    getchar();
    printf("\n Enter the operation [ +    -    *   / ] :--  ");
    scanf("%c", &op);
    printf("\n Enter the 2nd Number:- ");
    scanf("%f",&num2);

    switch(op){

        case '+':
        result=add(num1,num2);
        break;
        case '-':
        result=sub(num1,num2);
        break;        
        case '*':
        result=multi(num1,num2);
        break;
        case '/':
        if(num2==0){
            printf("Division by Zero error \n");
            return 1;
        }
        result=div(num1,num2);
        break;

        default:
        printf("Enter a valid operator");
    }

    printf("%.2f %c %.2f = %.2f",num1,op,num2,result);

    return 0;

}

float add(float num1, float num2)
{
    return num1 + num2;
}
float sub(float num1, float num2)
{
    return num1 - num2;
}
float multi(float num1, float num2)
{
    return num1 * num2;
}
float div(float num1, float num2)
{
    return num1 / num2;
}
