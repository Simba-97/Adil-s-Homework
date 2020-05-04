//Area of a Circle
#include <stdio.h>



int main(){
     
    float r, Area;
    float pi = 3.14;
    
    printf("Enter the radius of the circle:");
    scanf("%d", &r);
    Area = pi*r*r;
    printf("The area of the circle is: %f", Area);
   
    return 0;
}