#include<stdio.h>

int main(){

    printf("C Program to calculate the number of days in the given month & year");
    printf("\n ---------------------------------------------------------");

    int year,y;
    int month = 12;
    printf("\n Enter the Month:- ");
    scanf("%d",&month);
    printf("\n Enter the Year:- ");
    scanf("%d",&year);

    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
                printf(" The %d Month has 31 Days \n ",month);
                break;

        case 4:
        case 6:
        case 9:
        case 11:
                printf(" The %d Month has 30 Days \n ",month);
                break;

        case 2:
                if
                ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
                 printf(" The %d Month has 29 Days \n ",month);
                else
                 printf(" The %d Month has 28 Days \n ",month);
                break;

        default:
        printf(" Enter a valid month \n ");
        break;        
    }
    
    y = ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)));
    
    switch(y){
        case 1:
                printf("The year *%d* is a leap year and it has 366 Days",year);
                break;
        case 0:
                printf("The year *%d* is not a leap year and it has 365 Days", year);
                break;    
        default:
                printf("The year *%d* is not a leap year and it has 365 Days", year);     
                break; 
    }  
return 0;
}    