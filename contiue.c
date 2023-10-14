#include <stdio.h>

int main(){

    int i,n=2;
    for (int i = 0; i <= 20; i++)
    {
        if(i == n){
            n = n + 2;
            // continue;
        }
        printf(" %d",i);
    }
    


    return 0;
}