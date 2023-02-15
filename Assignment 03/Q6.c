int main(){

    printf("C Program to find Factors of a number");
    printf("\n --------------------------------------------------------- \n ");

    int num, count=1;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("the factors of %d are :- " ,num);
    
    while(count < num){

        if(num % count == 0){
        printf(" %d \t ",count);
        }
        count++;
    }
    return 0;

    }