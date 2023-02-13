#include<stdio.h>

int main(){

    printf("C Program to check the coordinates lie in which quadrant");
    printf("\n ---------------------------------------------------------");

    int coord1,coord2;
    printf("\n Enter the X Coordinate:- ");
    scanf("%d",&coord1);
    printf("\n Enter the Y Coordinate:- ");
    scanf("%d",&coord2);   

if(coord1 > 0 && coord2 > 0){
    printf("The coordinates %d & %d lie in the First Quadrant and on the Positive X & Y Axis",coord1, coord2);
}
else if(coord1 < 0 && coord2 > 0){
    printf("The coordinates %d & %d lie in the Second Quadrant and on the Negatuve X & Positive Y Axis",coord1, coord2);
}
else if(coord1 < 0 && coord2 < 0){
    printf("The coordinates %d & %d lie in the Third Quadrant and on the Negative X & Y Axis",coord1, coord2);
}
else if( coord1 == 0 && coord2 == 0){
    printf(" The coordinates %d & %d lie on the origin", coord1,coord2);
}
else{
    printf("The coordinates %d & %d lie in the Fourth Quadrant and on the Positive X & Negative Y Axis",coord1, coord2);
}

return 0;
}    