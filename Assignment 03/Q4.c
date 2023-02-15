int main(){

    printf("C Program to find Factorial of a number");
    printf("\n --------------------------------------------------------- \n ");

    int num,temp=1, factorial=1;
    printf("Enter a number:");
    scanf("%d", &num);

    while(temp<=num){
        printf("%d",temp);
        factorial = factorial * temp;
        temp++;
        if(temp!=num)
        printf(" * ");
        }

        printf(" = %d",factorial);
    return 0;

    }