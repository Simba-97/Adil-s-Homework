//To check whether a number is postive or negative
#include<stdio.h>

int main(){

    float num;
    printf("Enter the number:");
    scanf("%f", &num);
    if(num >= 0){
        printf("The number is positive");
    }
    else{
        printf("The number is negative");
    }
     
    return 0;
}