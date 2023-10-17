#include <stdio.h>

int main(){

    int num,sum = 1;
    printf("Enter the number you want to check:");
    scanf("%d",&num);

    for (int  i = 2;i < num; i++)
    {
        if (num%i == 0)
        {
            sum = sum + i;
        }
        else
            continue;
    }
    
    if (sum == num)
        printf("%d is perfect number",num);
    else
        printf("%d is not perfect number",num);
    
    return 0;
}