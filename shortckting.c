#include <stdio.h>

int main(){

    int a = 3,b = 4;
    //short circut and && operator
    int incr = (a>b) && (b++);
    printf("%d\n",incr);
    printf("%d\n",b);

 /*   incr = (a<b) && (b++);
    printf("%d\n",incr);
    printf("%d",b);
*/

    //short circuit or operator
    incr = (a<b) || (b++);
    //since a<b is true b++ will not get evaluated
    printf("%d\n",incr);
    printf("%d",b);
    return 0;
}