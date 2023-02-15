#include<stdio.h>

int main(){

    printf("C Program to print * Pattern in a Triangle \n");
    printf("--------------------------------------------------------- \n");

    int n,i,j;
    printf("Enter the Number: ");
    scanf("%d",&n);

    for(i=n;i>=1;i--){

        for(j=n;j>=i;j--){
        printf("%d ",j);
        }
    printf("\n");
    }
return 0;
}