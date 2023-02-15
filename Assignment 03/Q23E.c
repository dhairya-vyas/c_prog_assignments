#include<stdio.h>

int main(){

    printf("C Program to print * Pattern in a Triangle \n");
    printf("--------------------------------------------------------- \n");

    int i,j,k,n;
    printf("Enter the Number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        k=i;
        for(j=1;j<=i;j++,k++){
        printf("%c ",(char)(k+64));
        }
    printf("\n");
    }
return 0;
}