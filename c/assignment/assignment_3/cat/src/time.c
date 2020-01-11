#include <stdio.h>
#include <time.h>
int main ( void ) 
{
    struct tm time;
    time_t t1;
    time_t t2;
    int num;
    char *buf = ( char * ) malloc ( sizeof(char) * 256);
    printf("please enter:\n");
    fgets(buf,256,stdin);
    num = atoi(buf);
    int time1 = atoi(ctime(num))
    printf("please leave\n");
    fgets(buf,256,stdin);
    int num2 = atoi(buf);
    int time2 = atoi(ctime(num));
    double diff = difftime (t1,t2);
    printf("%f",diff);
    return 0;
}
    
