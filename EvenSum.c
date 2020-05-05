#include <stdio.h>

int main(){

   int range, sum =0;

    printf("Enter the range:");
    scanf("%d", &range);

    for (int i = 0; i <= range; i++)
    {
        sum += 2*i;
    }
    
    printf("the sum of the even natural numbers is: %d", sum);

    
    return 0;
}