#include <stdio.h>


static int i;//if you use static int i = 0; and then static int = 34; then you get redefinition error because we are initializing 0 to ourselves not bss segment is initializing 0 
static int i = 34;
//i = 23; if you do this it will produce an error
static int i;//bss size or data segment size will not change by this statement
int main(){
    static int i;
    // i = 34; it is okay to do this
    printf("%d",i);  // scope related problem since it is in scope of main function local variable will get priority and 0 will be printed
    return 0;
}