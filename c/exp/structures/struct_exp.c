#include <stdio.h>
struct details_employee {
    char *name; 
    int age;
    int empid;
    char *dob;
}a;

int main ( void ) 
{
    FILE *fp;
    a.dob = malloc ( sizeof(char) * 256 );
    a.name = malloc ( sizeof(char) * 256 );
    
    char * buffer = malloc ( sizeof(char) * 256 );
    printf ( " Enter the Employee name :" );
    fgets ( a.name ,25, stdin );
    printf ( " Enter the Employee age :" );
    fgets ( buffer , 25 , stdin );
    a.age = convert ( buffer);
    __fpurge( buffer );
    printf ( " Enter the Employee id :" );
    fgets ( buffer , 256, stdin );
    a.empid = convert ( buffer );
    printf ( " Enter the Employee Date of Birth :" );
    fgets ( a.dob ,256, stdin );
    fp = fopen ( "sample.txt","w+");
    if ( fp == NULL )
    {
        printf ( "File creation is filed " );
        exit ( 1 );
    }
    else 
    {
        fprintf ( fp , "The Employee Name : %s",a.name );
        fprintf ( fp , "The Employee age : %d\n",a.age );
        fprintf ( fp , "The Employee empid : %d\n",a.empid );
        fprintf ( fp , "The Employee date of birth : %s",a.dob );
    }
    fclose (fp);
    return 0;
}




