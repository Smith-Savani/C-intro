#include <stdio.h>
#include <limits.h>
//for special symbolic 


int main(){

    int var1 = INT_MIN;
    int var2 = INT_MAX;
    printf("The size of integer is %d to %d and size of int in bytes is %d ",var1,var2,sizeof(int));
    
    unsigned int var3 = 0;
    //for every system minimum size of unsigned int is 0
    unsigned int var4 = UINT_MAX;
    printf("\nThe size of unsigned integer is %u to %u and size of int in bytes is %d",var3,var4,sizeof(unsigned int));

    short int var7 = SHRT_MIN;
    short int var8 = SHRT_MAX;
    printf("\nThe size of short integer is %d to %d and size of short int in bytes is %d",var7,var8,sizeof(short int));
    
    short unsigned int var5 = 0;
    short unsigned int var6 = USHRT_MAX;
    printf("\nThe size of short unsigned integer is %u to %u and size of short unsigned int in bytes is %d",var5,var6,sizeof(short unsigned int));

    long int var9 = LONG_MIN;
    long int var10 = LONG_MAX;
    printf("\nThe size of long integer is %ld to %ld and size of long int in bytes is %d ",var9,var10,sizeof(long int));

    long unsigned int var11 = 0;
    long unsigned int var12 = USHRT_MAX;
    printf("\nThe size of long unsigned integer is %lu to %lu and size of long unsigned int in bytes is %d",var11,var12,sizeof(long unsigned int));

    long long int var13 = LLONG_MIN;
    long long int var14 = LLONG_MIN;
    printf("\nThe size of long long integer is %lld to %lld and size of long int in bytes is %d ",var13,var14,sizeof(long long int));

    long long unsigned int var15 = 0;
    long long unsigned int var16 = ULLONG_MAX;
    printf("\nThe size of long long unsigned integer is %llu to %llu and size of long int in bytes is %d ",var15,var16,sizeof(long long unsigned int));


    return 0;
}