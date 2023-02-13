#include <stdio.h>

int main(){

    float temp,celsius,farenheit;
    printf("C program to Convert temperature from Celsius to Farenheit and vice-versa :- \n");
    printf("------------------------------------ \n");

    printf("\n Enter the Temperature in Farenheit :- ");
    scanf("%f",&temp);

    celsius = 5*(temp-32)/9;
    printf("\n Temperature in Celsius is:-  %f",celsius);

    printf("\n Enter the Temperature in Celsius :- ");
    scanf("%f",&temp);

    farenheit =(temp*9/5) + 32;
    printf("\n Temperature in Farenheit is:-  %f",farenheit);



return 0;
}