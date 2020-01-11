#include <stdio.h>
#include <fcntl.h>

int main ( void ) 
{
    FILE *fp;
    FILE *fp1;
    char ch;
    pid_t pid;
    char *buf = NULL;
    buf = ( char * ) malloc ( sizeof ( char ) * 256 );

    fp = fopen("sample.txt","r+");
    if ( fp == NULL ) {
        perror("Fopen");
        exit(1);
    }
    fp1 = fopen("sample2.txt","w+");
    if ( fp1 == NULL ) {
        perror("Fopen");
        exit(1);
    }
    ch = fgetc(fp);
    printf("1 = %c\n",ch);
    fputc(ch,fp1);
   pid = fork();

    if ( pid == 0 ) {
        
    ch = fgetc(fp);
    printf("child = %c\n",ch);
    fputc(ch,fp1);
    /*ch = fgetc(fp);
    printf("child = %c\n",ch);
    fputc(ch,fp1);*/
       
   // fp = fp + 4;
    /*printf("%c child\n", fgetc(fp));
    wait(NULL);
    printf("%c child\n",fgetc(fp));

    fwrite(buf,1,1,fp);
    fread(buf,1,1,fp1);*/

    }
    else if ( pid > 0 ) {
        
    //wait(NULL);
   // sleep(5);
     ch = fgetc(fp);
    printf("parent = %c\n",ch);
    //wait(NULL);
    //ch = fgetc(fp);
    //printf("parent %c\n",ch);
     fputc(ch,fp1);
    //fputc('^',fp1);
    

    //fwrite(buf,1,1,fp);
    //fread(buf,1,1,fp1);
    }
    else
        perror("F*****");

    return 0;
}

     







