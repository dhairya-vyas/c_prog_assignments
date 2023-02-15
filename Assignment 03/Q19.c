#include <stdio.h>
 int main(){
    int num1,num2,i,j;
    printf("C Program to print table of the entered number \n");
    printf("----------------------------------------------- \n");

    printf("Enter the 1st number:- ");
    scanf("%d",&num1);
    printf("Enter the 2nd number:- ");
    scanf("%d",&num2);

    for(i=1;i<=10;i++){
        for(j=num1;j<=num2;j++){
        printf("%d \t",(i*j));
    }
    printf("\n ");
    }
    return 0;
 }