#include <stdio.h>
#include <linux/kernel.h>

int main ( void ) 
{
    struct sysinfo info;
    printf("%lu ",info.uptime);
    printf("%hu ",info.procs);
    return 0;
}
