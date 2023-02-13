#include<stdio.h>

int main(){

    printf("C Program to check the number of days in the given year and check if it's leap year");
    printf("\n ---------------------------------------------------------");

    int year;
    printf("\n Enter the Year:- ");
    scanf("%d",&year);

    if(year % 400 == 0){
        printf("The year *%d* is a leap year and the year *%d* has 366 Days", year,year);
    }
    else if(year % 100 == 0){
        printf("The year *%d* is not a leap year and the year *%d* has 365 Days", year,year);
    }
    else if(year % 4 == 0){
        printf("The year *%d* is a leap year and the year *%d* has 366 Days", year,year);
    }
    else{
        printf("The year *%d* is not a leap year and the year *%d* has 365 Days", year,year);
    }

    return 0;
}