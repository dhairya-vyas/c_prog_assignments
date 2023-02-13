#include<stdio.h>

int main(){

    printf("C Program to calculate the number of days in the given month & year");
    printf("\n ---------------------------------------------------------");

    int year;
    int month = 12;
    printf("\n Enter the Month:- ");
    scanf("%d",&month);
    printf("\n Enter the Year:- ");
    scanf("%d",&year);

if(month == 1 || month == 3 || month == 5 ||
     month == 7 || month == 8 || month == 10 ||
     month == 12){

    printf(" The %d Month has 31 Days \n ",month);

    if(year % 400 == 0){
        printf("The year *%d* has 366 Days",year);
    }
    else if(year % 100 == 0){
        printf("The year *%d* has 365 Days",year);
    }
    else if(year % 4 == 0){
        printf("The year *%d* has 366 Days", year);
    }
    else{
        printf("The year *%d* has 365 Days",year);
    }
}

else if(month == 4 || month == 6 || 
        month == 9 || month == 11){

    printf(" The %d Month has 30 Days \n",month);

    if(year % 400 == 0){
        printf("The year *%d* has 366 Days",year);
    }
    else if(year % 100 == 0){
        printf("The year *%d* has 365 Days",year);
    }
    else if(year % 4 == 0){
        printf("The year *%d* has 366 Days", year);
    }
    else{
        printf("The year *%d* has 365 Days",year);
    }
}

else if (month == 2){

    if(year % 400 == 0){
        printf("The year *%d* has 366 Days\n",year);
        printf(" The %d Month has 29 Days ",month);
    }
    else if(year % 100 == 0){
        printf("The year *%d* has 365 Days \n",year);
        printf(" The %d Month has 28 Days",month);
    }
    else if(year % 4 == 0){
        printf("The year *%d* has 366 Days \n", year);
        printf(" The %d Month has 29 Days",month);
    }
    else{
        printf("The year *%d* has 365 Days \n",year);
        printf(" The %d Month has 28 Days",month);
    }
}

else {
    printf("Please enter a valid Month Number. %d is not a month",month);
}

    return 0;
}