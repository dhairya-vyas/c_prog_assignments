#include<stdio.h>

int main(){

    printf("C Program to calculate Billing Price");
    printf("\n ---------------------------------------------------------");

    int qty;
    float amt;
    printf("\n The unit selling price is Rs.5");
    printf("\n Enter the Quantity:- ");
    scanf("%d",&qty);

    if(qty>30 && qty < 50){
        printf("There is a discount of 10 percent");
        amt = (qty * 5);
        amt = amt - (amt * 0.10);
        printf("\n The final billing amount is %f",amt);
    }
    else if(qty>50){
        printf("There is a discount of 15 percent");
        amt = (qty * 5);
        amt = amt - (amt * 0.15);
        printf("\n The final billing amount is %f",amt);
    }    
    else{
        amt = qty * 5;
        printf("\n The final billing amount is %f",amt);
    }
return 0;
}