#include "header.h"
int main ( int argc, char *argv[] )
{
    //FILE *fp;
    //FILE *fp1;
    long pos;
    long offset;
    long rem;
    int status;
    fp = fopen( argv[1], "r" );
    fp1 = fopen( "sample22.txt","w+");
    if ( fp == NULL )
    {
        printf("Error in opening file");
    }
    else
    {
        fseek(fp,0,SEEK_END);
        pos = ftell(fp);
        printf("the size of the file is %ld ",pos);
        offset = pos / 4;
        rem = pos % 4;
        rewind(fp);
        pthread_t th_id;
        pthread_t th_id1;
        pthread_t th_id2;
        pthread_t th_id3;
        status = pthread_create ( &th_id,NULL,print_file,(void *)offset);
        if ( status != 0 )
        {
           printf("Thread creation failed: %s\n",strerror(status));
        }
        status = pthread_create ( &th_id1,NULL,print_file,(void *)offset);
        if ( status != 0 )
        {
           printf("Thread creation failed: %s\n",strerror(status));
        }
        status = pthread_create ( &th_id2,NULL,print_file,(void *)offset);
        if ( status != 0 )
        {
           printf("Thread creation failed: %s\n",strerror(status));
        }
        status = pthread_create ( &th_id3,NULL,print_file,(void *)( offset + rem ));
        if ( status != 0 )
        {
           printf("Thread creation failed: %s\n",strerror(status));
        }
        /*status = pthread_join(th_id,NULL);
        if ( status != 0 )
        {
           printf("Thread creation failed: %s\n",strerror(status));
        }
        status = pthread_join(th_id1,NULL);
        if ( status != 0 )
        {
           printf("Thread creation failed: %s\n",strerror(status));
        }
        status = pthread_join(th_id2,NULL);
        if ( status != 0 )
        {
           printf("Thread creation failed: %s\n",strerror(status));
        }
        status = pthread_join(th_id3,NULL);
        if ( status != 0 )
        {
           printf("Thread creation failed: %s\n",strerror(status));
        }*/
        pthread_exit(NULL);
        fclose(fp);
        fclose(fp1);
    }

    return 0;
}
