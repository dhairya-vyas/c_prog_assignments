int main(){

    printf("C Program to find Armstrong of a number");
    printf("\n --------------------------------------------------------- \n ");

    int num,rem, i, result,num1;
    printf("Enter a number:");
    scanf("%d", &num);
    num1 =num;

    while(num1 != 0){
        rem = num1 % 10;
        result += rem * rem * rem;
        num1 /=10;
        }

        if (result==num){
            printf("The given number %d is an Armstrong Number",num);
        } else {
            printf ("The given number %d is NOT an Armstrong Number",num);
            }
    return 0;

    }