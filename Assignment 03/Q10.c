#include <stdio.h>
 int main(){
    int num,i;
    printf("C Program to print table of the entered number \n");
    printf("----------------------------------------------- \n");

    printf("Enter the number:- ");
    scanf("%d",&num);

    for(i=0;i<=10;i++){
        printf("%d x %d = %d \n", num , i , (num*i));
    }
    return 0;
 }