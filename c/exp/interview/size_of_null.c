#include <stdio.h>
int main ( void ) 
{
    char c = 'A';
    printf(" %d ", sizeof("A"+2));//  output is 2
    printf(" %d ", sizeof('A'));//  output is 4
    printf(" %d ", sizeof(c));//    output is 1
    printf(" %d ", sizeof(NULL));// output is 4
    printf(" %d ", sizeof("sayyuf")); //output is 7 
    printf(" %d ", sizeof("sayyuf\0hjj")); //output is 11
   return 0; 
}
