#include<stdio.h>

int main(){

    printf("C Program to check if the given number is a Prime Number \n");
    printf("--------------------------------------------------------- \n");

    int n,i,flag=0;
    printf("Enter the Number: ");
    scanf("%d",&n);

    if(n==0 || n==1){
        flag = 1;
    }
    for(i=2;i<=n/2;++i)
    {
        if(n % i == 0)
        flag=1;
        break;
    }

    if(flag==0){
        printf("The number %d is a prime number",n);
    }
    else{
    printf("The number is %d NOT a prime number",n);
    }
    return 0;
}
