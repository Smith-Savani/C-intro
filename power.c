#include <stdio.h>

int main(){

    int base,power,mul = 1;
    double mul2 = 1.0;
    printf("Enter the base and power consecutively:");
    scanf("%d %d",&base,&power);
    if(power>0){
    for (int i = 0; i < power; i++)
    {
        mul = mul*base;
    }
    printf("%d to the power of %d is %d",base,power,mul);
    }
    else if(power<0){
    for (int i = power; i < 0 ; i++)
    {
        mul2 = mul2*(1.0/base);
    }

    printf("%d to the power of %d is %lf",base,power,mul2);
    }
    else{
        printf("%d to the power of %d is 1",base,power);
    }
    return 0;
}