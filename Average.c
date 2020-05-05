#include <stdio.h>

int main(){

    int n;
    float sum;
    float avg;
    printf("Enter the range:");
    scanf("%d", &n);

    sum = (n*(n+1))/2;
    
    avg = sum/n;

    printf("The average of the numbers is: %f", avg);
    
    return 0;
}