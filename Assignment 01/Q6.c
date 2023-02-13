#include <stdio.h>

int main() {

    int num;
    printf("C program to print  table of a given number :- \n");
    printf("------------------------------------ \n");

    printf("\n Enter the number you want to print the table for:- ");
    scanf("%d",&num);

    for(int i = 1;i<=410;i++)
    {
        printf("\n %d x %d = %d",num,i,num*i);
    }
    return 0;
}
