#include <stdio.h>

int main(){
    int num,n = 0;
    printf("Enter the number:");
    scanf("%d",&num);
    //for digits
    int q = num;
    while (q != 0)
    {
        q = q/10;
        n++;
    }
    // printf("%d",n);
    q = num;
    int count = n,mul = 1,result = 0;
    while (q != 0)
    {
        int rem = q % 10;
        while (count != 0)
        {
            mul = mul * rem;
            count--;
        }
        result = result + mul;
        mul = 1;
        count = n;
        q = q /10;
    }
    if (result == num)
        printf("The number is armstrong number");
    else
        printf("The number is not armstrong number");
    
    

    return 0;
}