int main(){

    printf("C Program to find Factorial of a number");
    printf("\n --------------------------------------------------------- \n ");

    int num, factorial=1;
    printf("Enter a number:");
    scanf("%d", &num);
    int temp=num;
    while(temp!=0){
        printf("%d",temp);
        factorial = factorial * temp;
        temp--;
        if(temp!=1)
        printf(" * ");
        }

        printf(" = %d",factorial);
    return 0;

    }