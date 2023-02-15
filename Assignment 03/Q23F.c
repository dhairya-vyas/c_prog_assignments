#include<stdio.h>

int main(){

    printf("C Program to print * Pattern in a Triangle \n");
    printf("--------------------------------------------------------- \n");

    int i,j,k,n;
    printf("Enter the Number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        
        for(j=i;j<=n;j++){
        printf("%c ",(char)(j+64));
        }
    printf("\n");
    }
return 0;
}