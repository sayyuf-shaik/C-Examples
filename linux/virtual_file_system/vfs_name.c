#include <stdio.h>
#include <linux/fs.h>

int main ( void ) 
{
    struct file_system_type *vfs;

    printf("%s",vfs->name);
    return 0;
}
