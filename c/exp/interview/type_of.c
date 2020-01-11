#include <stdio.h>
int main ( void ) 
{
    char c = 'A';
    typeof(c) a;
    a = 's';
    printf(" %c ",  a);//  output is 2
    printf(" %d ", sizeof('A'));//  output is 4
    printf(" %d ", sizeof(c));//    output is 1
    printf(" %d ", sizeof(NULL));// output is 4
    printf(" %d ", sizeof("sayyuf")); //output is 7 
    printf(" %d ", sizeof("sayyuf\0hjj\0")); //output is 11
   return 0; 
}
