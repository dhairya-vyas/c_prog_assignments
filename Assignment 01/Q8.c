#include <stdio.h>

int main(){

     int num1,num2,num3,avg;
    printf("C program to print average of a given 3 numbers :- \n");
    printf("------------------------------------ \n");

    printf("\n Enter the 1st number:- ");
    scanf("%d",&num1);
    printf("\n Enter the 2nd number:- ");
    scanf("%d",&num2);
    printf("\n Enter the 3rd number:- ");
    scanf("%d",&num3);        


    avg = (num1 + num2 + num3) / 3 ;
    printf("\n The average of these 3 numbers is :- %d",avg);
}