#include<stdio.h>

int prime(int n){

    int i,flag=0;


    if(n<=1){
       return 0;
    }
    for(i=2;i<=n/2;++i)
    {
        if(n % i == 0){
            return 0;
        }
    }
return 1;
}

int main(){
        int n,flag;
 
    printf("C Program to check if the given number is a Prime Number \n");
    printf("--------------------------------------------------------- \n");
    
    printf("Enter the Number: ");
    scanf("%d",&n);
    
    flag= prime(n);
    
    if(flag==1){
        printf("The number %d is a prime number",n);
    }
    else{
        printf("The number is %d NOT a prime number",n);
    }

    
    return 0;
}
