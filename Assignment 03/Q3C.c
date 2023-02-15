int main(){

    printf("C Program to find Palindrome of a number");
    printf("\n --------------------------------------------------------- \n ");

    int num,rem, i, rev = 0,num1;
    printf("Enter a number:");
    scanf("%d", &num);
    num1 =num;

    while(num>0){
        rem = num % 10;
        rev = rem + rev *10;
        num =num/10;
        }

        if (num1==rev){
            printf("The given number %d is a palindrome",num1);
        } else {
            printf ("The given number %d is NOT Palindrome",num1);
            }
    return 0;

    }