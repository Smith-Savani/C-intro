#include <stdio.h>
#include <math.h>

int main(){
    int num,count = 0;
    printf("Enter the number:");
    scanf("%d",&num);

    int val1 = num;
    int val2 = ceil(sqrt(num));
    
    for (int i = 2; i <= val2; i++)
    {
        if (val1%i == 0)
            count = 1;
            // break;
    }
    if ((count == 0 && val2 != 1) || val2 == 2 || val2 == 3) // because 1 is not prime number so val2 can not be 1 and val2 = 2,3 conditions are not covered in loops they are  base case
        printf("The number is prime number");
    else
        printf("The number is not prime number");
    
    


    return 0;
}