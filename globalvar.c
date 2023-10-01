#include <stdio.h>

int fun();

int var = 10; // now it is global variable if in any function local variable is not there it will access global variable ex
//main function var is locally defined so it will use local variable and prints 3 whereas fun will access global variable

int main(){
    int var = 3;
    printf("%d\n",var);
    fun();

    return 0;
}

int fun()
{
    printf("%d",var);
}