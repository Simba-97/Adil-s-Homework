//to find the square root of a number
#include <stdio.h>
#include <math.h>

int main(){

    float num, sqroot;

    printf("Enter the number:");
    scanf("%f", &num);

    printf("The square root of the number is: %f", sqrt(num));
    
    return 0;
}