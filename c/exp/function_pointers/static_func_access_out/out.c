#include <stdio.h>
typedef void (*static_func_type) ( void ) ;
extern static_func_type static_func_ptr;

int main ( void ) 
{
    printf("I am in Main func");
    
    static_func_ptr();
    return 0;
}
