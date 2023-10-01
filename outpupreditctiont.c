#include <stdio.h>

int main(){

    // printf("%d",printf("%s","Hello World!"));
    
    /*printf("%s\n","Hello");
    printf("%10s","Hello");*/
/*
    char c = 255;
    c = c + 10; // here c = 265 we are exceeding the range of character datatype MOD 2^8 function which is equal to 256
    //265%(2^8) = 265%256 = 9  

    printf("%d",c);
    printf(" %c",c);//since c = 9 which in ASCII is an unprintable character it prints nothing.


*/

unsigned i = 1;//if datatype is not defined int datatype is taken default
int j = -4;
printf("%u",i+j);//the output value will be based on integer value depends from machine to machine
    return 0;
}