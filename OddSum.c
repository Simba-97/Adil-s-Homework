#include <stdio.h>

int main(){

   int range, sum = 0, new = 1;

    printf("Enter the range:");
    scanf("%d", &range);

    for (int i = 0; i < range; i++)
    {
        sum += new;
        new += 2;
    }
    printf("The sum of the first %d Odd numbers is: %d", range, sum);

    return 0;
}