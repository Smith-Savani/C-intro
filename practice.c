#include <stdio.h>
#define NESO "%s\n"
#define MESSAGE "welcome to neso academy!"


int main(){
    /*int var = 052;
    //when we place 0 before any value it is treated as octal value menas 52 is ocatal value since we are printing decimal value we need to convert it into decimla value
    printf("%d",var);
    printf("\n%o",var);
    */
/*
   printf(NESO,MESSAGE);
// the job of preprosser is to replace MACRO with it's corresponding value  
*/

int var = 0x43ff;
printf("%x\n",var);
printf("%X\n",var);
printf("%d",var);
    return 0;
}