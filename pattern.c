#include <stdio.h>

int main(){
    int n;
    printf("Enter row:");
    scanf("%d",&n);
    for (int  i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2*n - 1; j++)
        {
            if (j >= n-(i-1) && j<= n+(i-1))
            {
                printf("*");
            }
            else{
                printf(" "); //instead of printing blank space use any character to understand how this works
            }
        }
        printf("\n");
    }
    
    

    return 0;
}