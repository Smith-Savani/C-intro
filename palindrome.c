#include <stdio.h>

int main(){

    int num,rem,result = 0;
    printf("Enter the nubmer:");
    scanf("%d",&num);
    int q = num;// it's because you have to save number for comparision with result to print output

    while (q != 0)
    {
        rem = q%10;
        result = result*10 + rem;
        q = q/10;
    }
    if (num == result)
        printf("The number is palindrome");
    else
        printf("The nubmer is not palindrome");
    
    

    return 0;
}