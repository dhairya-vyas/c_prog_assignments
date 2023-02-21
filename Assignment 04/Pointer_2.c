#include <stdio.h>
void swap(int *a, int *b,int *temp){
*temp = *a;
*a=*b;
*b = *temp;

}

int main(){
    int a , b,temp;
   
    printf("C Program to swap 2 numbers using Pointer");
    printf("\n ------------------------------------------");
    printf("\n Enter the 1st Number:- ");
    scanf("%d",&a);
    printf("\n Enter 2nd Number:- ");
    scanf("%d",&b);
    printf("Before swapping a =  %d and b = %d \n", a, b);
    swap(&a, &b, &temp);
    printf("After swapping a =  %d and b = %d", a, b);

    return 0;
}