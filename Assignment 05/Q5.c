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
int minarray(int arr[], int size){
    int min=arr[0];
    int i=0;
    for(i=1;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    
    printf("C program to print maximum of array \n");
    printf("-------------------------------------\n");
    
    int i=0,max=0,min=0;
    int numbers[]={49,75,66,17,81,39};

    max=maxarray(numbers,6);
    printf("The maximum of array is %d \n",max);
    
    min=minarray(numbers,6);
    printf("The minmum of array is %d \n",min);

    return 0;
}