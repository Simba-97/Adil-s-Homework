//Area and perimeter of a Square
#include<stdio.h>

int main(){

    int a;
    int area, peri;
    
    printf("Enter the side of the square:");
    scanf("%d", &a);
    area = a*a;
    peri = 4*a;

    printf("The area of the square is %d", area);
    printf("The perimeter of the square is %d", peri);

    return 0;
}