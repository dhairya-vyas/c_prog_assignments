#include <stdio.h>

int main() {
    
    int i,j,num;
    printf("C program to print  *  Pattern :- \n");
    printf("------------------------------------ \n");

    printf("\n Enter the Number of * you want to print:- ");
    scanf("%d",&num);
    for(i=1; i<=num;i++)
        {
            for(j=1;j<=i;j++)
            printf(" * ",i);
            printf("\n");
        }
    

    printf("\n * \n * * \n * * * \n * * * * \n" ) ;

return 0;
}