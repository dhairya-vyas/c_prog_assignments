#include <stdio.h>

int main(){

    printf("C Program to print the Reverse of the given number \n");
    printf("---------------------------------------------- \n");

    int n,reverse = 0, remainder;
    printf("Enter the number:-- ");
    scanf("%d",&n);

    while(n != 0){
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10 ;    
    }
    printf("Reverse number : %d",reverse);
    return 0;
}