#include<stdio.h>

void printchar(char ch, int count)
{
    int i;
    for(i=1;i<=count;i++){
    printf("%c ",ch);
}
    printf(" \n");
}

int main(){
    char ch;
    int count;
    printf("C Program to print the character n number of times \n");
    printf("-------------------------------------------------- \n");

    printf("Enter the character:- ");
    scanf("%c", &ch);

    printf("Enter the number of times you want to print:- ");
    scanf("%d",&count);
    printchar(ch,count);
return 0;

}