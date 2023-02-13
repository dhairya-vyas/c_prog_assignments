int main(){

    printf("C Program to find Palindrome of a 5 Digit number");
    printf("\n ---------------------------------------------------------");

    int num,rem, i, rev = 0,num1,count =0;
    printf("Enter a five digit number: \n");
    scanf("%d", &num);
    num1 =num;

    while(num>0){
        rem = num % 10;
        rev = rem + rev *10;
        num =num/10;
        count++;
    }

    if (count==5){
        if (num1==rev){
            printf("the given number %d is a palindrome",num1);
        } else {
            printf ("The given number %d is NOT Palindrome",num1);
            }
    }else{
        printf("the given number %d is not a five digit number!",num1);
    }
    return 0;

    }