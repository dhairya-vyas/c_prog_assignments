#include <stdio.h>
#include<math.h>

int main(){

    int a,b,c,s,area,perimeter;
    printf("C program to find Area and Perimeter of a Triangle :- \n");
    printf("------------------------------------ \n");

    printf("\n Enter lenth of 1st Side :- ");
    scanf("%d",&a);
    printf("\n Enter lenth of 2nd Side :- ");
    scanf("%d",&b);
    printf("\n Enter lenth of 3rd Side :- ");
    scanf("%d",&c);    

    perimeter = a + b + c;
    printf("\n Perimeter of this triangle is :- %d",perimeter);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n Area of this triangle is :- %d",area);

return 0;
}