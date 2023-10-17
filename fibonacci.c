#include <stdio.h>

int main(){

    int n;
    printf("Enter the number of termsr:");
    scanf("%d",&n);
    
    /*  MY LOGIC 
    int fib1 = 0,fib2 = 1;
    printf("%d %d",fib1,fib2); 
    for (int  i = 1; i <= n-2; i++)
    {
       int fib = fib1 + fib2;
       printf(" %d",fib);
       fib1 = fib2;
       fib2 = fib;
    */
    int a = 0,b = 1,result = 0;
    for (int  i = 0; i < n; i++)
    {
        printf(" %d",a);
        result = a+b;
        a = b;
        b = result;
    }
    

    
    

    return 0;
}