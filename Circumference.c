//Circumference of a circle
#include <stdio.h>

int main(){

    float r, circum;
    float pi = 3.14;
    
    printf("Enter the radius of the circle:");
    scanf("%f", &r);
    circum = 2*pi*r;
    printf("The circumference of the circle is: %f", circum);
    
    return 0;
}