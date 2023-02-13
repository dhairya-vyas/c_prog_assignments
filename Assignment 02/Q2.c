#include<stdio.h>

int main() {
    int num;
    printf("C Program to check if the number is Even or Odd");
    printf("\n --------------------------------------------");

    printf("\n Enter the number:- ");
    scanf("%d",&num);

    if (num % 2 == 0){
        printf("The number %d is an Even number", num);
    }

    else{
        printf("the number %d is an Odd number",num);
    }
}
