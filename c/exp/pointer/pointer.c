#include <stdio.h>
int main ( void )
{
    char *ptr;
    int array[5] = {55,56,57,58,59};
    ptr = &array;
    int *int_ptr = (int *)&ptr;
    printf("%p",int_ptr);
    
}
