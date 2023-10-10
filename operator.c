#include<stdio.h>

int main(){
    int i = 5;
    int var = sizeof(i++);
    printf("%d %d",i,var);
    return 0;
}

/*
here post decrement is not evaluated 
C standard is the language specification which is adopted by all C compilers acorss the globe.
according to C99 standard:
if the type of the oprand is a vairable length array type, then the operand is evaluated;otherwise,
the operand is not evaluated and the result
is an integer constant.
the size is determined from the type of the opeand.
*/