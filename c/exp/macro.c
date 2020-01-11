#include <stdio.h>
int main ( void ) 
{
    printf( "%s at %d in time %s at the date %s and the functon ",__FILE__,__LINE__,__TIME__,__DATE__,__func__);
    return 0;
}
