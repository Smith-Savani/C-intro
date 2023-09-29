#include<stdio.h>

int main(){
    int _num = 34;
    int _num2 = 43;
    // printf("%d%d",_num,_num2);
    printf("%d %d",_num,_num2);
     /*printf is actually printing %d but % is place holder which actually tells compiler that printf what is next that's why if you use line 6 
    you won't get space between 34 and 43 because there is no space between %d%d whereas if you use line 7 you will see space between 34 and 43 
    because there is space between 34 and 43. d is for decimal.*/
    return 'a';
}