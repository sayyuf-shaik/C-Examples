#include <stdio.h>
int main()
{
    char *str =  malloc ( sizeof(char)*512);
   // fgets(str,512,stdin);
    printf("%d",*( str + 0 ));
}
