#include<stdio.h>
int main()
    {
int a,b,c,d,e ,reverse = 0,remainder;
printf("C program to find Face value place value & reverse of a given 4 digit number :- \n");
printf("------------------------------------ \n");

printf("Enter the Four Digit Number:- ");
scanf("%d",&a);
int num=a;
int num1=a;

b=a/1000; a=a%1000;
c=a/100; a=a%100;
d=a/10; a=a%10; e=a;
printf("Face value of %d is = %d \t  %d \t  %d \t  %d \t ",num,b,c,d,e);


b=num/1000; num=num%1000; b=b*1000;
c=num/100; num=num%100; c=c*100;
d=num/10; d=d*10; num=num%10; e=num;
printf("\n Place value of %d is = %d +  %d +  %d +  %d" ,num,b,c,d,e);


remainder=num1;
while(remainder != 0) {
    
    reverse = reverse * 10 + remainder % 10;
    remainder=remainder/10;
}

printf("\n The reverse number is:-  %d", reverse);


return 0;
    }
