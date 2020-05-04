//to find the factorial of a given number
#include <stdio.h>

 int factorial(int num){
    
    if(num == 0){
        return 1;
    }
    else{
        return num*factorial(num - 1);
    }

}
  
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    printf("The factorial of the number is %d", factorial(num));

    return 0;
}