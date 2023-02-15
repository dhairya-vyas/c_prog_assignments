#include <stdio.h>
 int main(){
    int i,j;
    printf("C Program to print table of 1 to 10 numbers \n");
    printf("----------------------------------------------- \n");


    for(i=1;i<=10;i++){

        for(j=1;j<=10;j++)
        printf("%d x %d = %d \n", j , i , (j*i));
    }
    return 0;
 }