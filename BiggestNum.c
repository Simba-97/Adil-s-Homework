//To find out the biggest out of three Numbers
#include <stdio.h>

int main(){
    
    int a,b,c;
    printf("Enter the Numbers:");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && a>c){
        printf("A is the largest");
    }
    else if(b > a && b > c){
        printf("B is the largest");
    }
    else{
        printf("C is the largest");
    }
    
    return 0;
}