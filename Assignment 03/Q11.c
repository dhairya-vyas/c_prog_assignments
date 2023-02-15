#include <stdio.h>
 int main(){
    int num,temp,factorial;
    printf("C Program to print Factorial of the entered number \n");
    printf("----------------------------------------------- \n");

    printf("Enter the number:- ");
    scanf("%d",&num);

    for(temp=1;temp<=num;temp++){
        
        if(num % temp == 0)
        printf(" %d ", temp);
        if(num<temp){
            printf(" * ");
            }
    }
    printf(" =  %d",num);
    return 0;
 }