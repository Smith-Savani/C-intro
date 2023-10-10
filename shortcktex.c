#include <stdio.h>

int main(){

    int a = 1,b = 1,c,d;
    c = ++a || b++;
    d = b-- && --a;
    printf("%d %d %d %d",d,c,b,a);

    return 0;

}