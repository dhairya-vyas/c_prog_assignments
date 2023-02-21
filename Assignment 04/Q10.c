#include<stdio.h>

int getDaysinMonth(int month, int year){
if(month == 1 || month == 3 || month == 5 ||
     month == 7 || month == 8 || month == 10 ||
     month == 12){
        return 31;
     }
else if(month == 4 || month == 6 || 
        month == 9 || month == 11){
            return 30;
        }
else if(month==2){
    if(year % 400 == 0){
        return 29;
    }
    else if(year%100 == 0){
        return 28;
    }
    else if(year%4 == 0){
        return 29;
    }
    else {
        return 28;
    }
}     
else{
    return -1;
    }       
}

int main(){

    printf("C Program to calculate the number of days in the given month & year");
    printf("\n ---------------------------------------------------------");

    int year,month = 12;
    printf("\n Enter the Month:- ");
    scanf("%d",&month);
    printf("\n Enter the Year:- ");
    scanf("%d",&year);


int days= getDaysinMonth(month,year);

if (days == -1){
    printf("Enter a valid month. %d is not a month", month);
}
else{
    printf("The %d Month has %d days \n",month,days);

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

return 0;
}
