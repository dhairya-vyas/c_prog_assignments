#include <stdio.h>
 int main(){
    int base,index;
    long power = 1;
    int i;
    printf("C Program to calculate the Power of the entered number \n");
    printf("----------------------------------------------- \n");

    printf("Enter the Base:- ");
    scanf("%d",&base);

    printf("Enter the Index:- ");
    scanf("%d",&index);    

    for(i=1;i<=index;i++){
        power = power * base;
    }
    printf("%d ^ %d =  %lld",base , index, power);
    return 0;
 }