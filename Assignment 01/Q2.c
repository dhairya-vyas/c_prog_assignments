#include <stdio.h>

int main() {
    
    int decimalnum,num;
    printf("C program to convert a normal number to Decimal, Hex and Octal :- \n");
    printf("------------------------------------ \n");

 printf("\n Enter the Number you want to convert:- ");
    scanf("%d",&num);

    printf("Hexadecimal number is:- %x", num);
    printf("\n Octal number is:- %o", num);
    printf("\n Decimal number is:- %d", num);

    return 0 ;
}