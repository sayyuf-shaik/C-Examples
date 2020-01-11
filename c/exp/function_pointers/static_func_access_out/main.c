#include <stdio.h>
static void func();

typedef void (*static_func_type) (void );
static_func_type static_func_ptr =func;
static void func ( )
{

    printf( " i am a static function " );
}

