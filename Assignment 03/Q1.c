#include <stdio.h>

int main(){

    printf("C Program to print a Character n number of times \n");
    printf("---------------------------------------------- \n");

    int i,n;
    printf("Enter the number of times you want to print ' * ' :-- ");
    scanf("%d",&n);

    while(i<n){
        printf("* \t");
        i++;
    }
    return 0;
}