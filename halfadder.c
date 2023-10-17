#include <stdio.h>

int main(){

    int x,y,sum = 0,carry = 0;
    printf("Enter the value of x and y:");
    scanf("%d %d",&x,&y);

    while (y != 0)
    {
        sum = x^y;
        carry = (x&y)<<1;
        x = sum;
        y = carry;
    }
    
    printf("Sum of two numbers is %d",sum);
    return 0;
}