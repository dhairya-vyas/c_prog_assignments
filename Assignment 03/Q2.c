#include <stdio.h>

int main(){

    printf("C Program to print table of the given number \n");
    printf("---------------------------------------------- \n");

    int i,n;
    printf("Enter the number to print the Table :-- ");
    scanf("%d",&n);

    while(i<=10){
        printf("%d * %d = %d \n",n,i , n*i);
        i++;
    }
    return 0;
}