#include <stdio.h>

int main(){

    int num1,num2;
    printf("Enter two number :");
    scanf("%d %d",&num1,&num2);
    int x = num1;
    int y = num2;
    if (num2>0)
    {
        while (y != 0)
        {
            x++;
            y--;
        }
    }
    else{
        while (y != 0)
        {
            x--;
            y++;
        }
    }
    
/*
    int sum = num1;
    for (int  i = 0; i < num2; i++)
    {
        sum++;
    }
*/    
    printf("The sum of %d and %d is %d",num1,num2,x);


    return 0;
}