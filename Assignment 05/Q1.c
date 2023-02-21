#include<stdio.h>

int main(){
    int marks[5],i,total=0;
    float avg=0.0;

    printf("Enter the number:- ");

    for(i=1;i<5;i++)
    {
        scanf("%d",&marks[i]);
        total=total+marks[i];
    }

    avg = (float)total / 5;

    printf("The total marks is %d \n",total);

    printf("the average marks is %.2f",avg);

return 0;
}
