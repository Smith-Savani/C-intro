#include <stdio.h>

int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int mul = 1,result = 0,rem = 0;
    int q = num;
    while (q != 0)
    {
        int rem = q % 10;
        while (rem != 0)
        {
            mul = mul*rem;
            rem--;
        }
        result = result + mul;
        mul = 1;
        q = q /10;
        
    }
    if (result == num)
        printf("The number is Strong number");
    else
        printf("The number is not Strong number");
    
    

    return 0;
}