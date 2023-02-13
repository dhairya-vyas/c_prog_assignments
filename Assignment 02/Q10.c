int main(){

    printf("C Program to find range of Entered Character");
    printf("\n ---------------------------------------------------------");

    char c;
    printf("\n Enter a Character:");
    scanf("%c", &c);

     if(c >= 65, c <= 90){
        printf("UPPERCASE");
    }
    else if(c >= 97 , c <= 122){
        printf("LOWERCASE");
    }
    else if(c >= 48 , c <= 57){
        printf("DIGIT");
    }
    else if(c == 32){
        printf("SPACE");
    }
   else if(c == 9){
        printf("TAB");
    }
    else if(c = 13){
        printf("CARRIAGE RETURN");
    }
    else if(c = 10){
        printf("NEW LINE");
    }
    else{
        printf("NOT LISTED ABOVE");
    }

    return 0;
}
