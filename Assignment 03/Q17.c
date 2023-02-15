#include<stdio.h>

int main(){

    printf("C Program to print * Pattern in a Square \n");
    printf("--------------------------------------------------------- \n");

    int n,i,j;
    printf("Enter the Number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        for(j=1;j<=n;j++){
        printf("* ");
        }
    printf("\n");
    }
return 0;
}