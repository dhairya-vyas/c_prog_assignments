#include<stdio.h>

int maxarray(int arr[], int size){
    int max=arr[0];
    int i=0;
    for(i=1;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int main(){

    printf("C program to print maximum of array \n");
    printf("-------------------------------------\n");
    
    int i=0,max=0;
    int numbers[]={49,75,66,17,81,39};

    max=maxarray(numbers,6);
    printf("The maximum of array is %d \n",max);

    return 0;
}