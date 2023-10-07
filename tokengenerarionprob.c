#include <stdio.h>

int main(){

    int a = 3, b = 4;
    printf("%d\n",a+++b);

    int c = 3, d = 4;
    printf("%d\n",c + ++d);


/* 
    int e = 3, f = 4;
    printf("%d",e+++++f);
*/

// will produce error lvalue is required
    return 0;
}