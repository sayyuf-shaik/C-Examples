#include <stdio.h>
#include <stdlib.h>
char *my_strtok ( char *str, char *token )
{  
    int i = 0;
    char *ptr = str; 
    char *temp = ( char * ) malloc ( 125 * sizeof(char) );
   //char *temp_ptr = temp;   
   if( *str != '\0' )
    {
        while( *( ptr + i ) != *token )
        {
            *(temp + i) = *(ptr + i);
            // printf("%c",(str+ i));
            i++; 
         }
    }
   else
   {
       return NULL;
   }
        //for( i = 0; i < 5;i++)
        //printf("%c",temp[i]);

       return temp;
    

}
int main ( void )
{
    char str[] = "shaik-sayyuf-basha";
    char *token;
    token = my_strtok ( str, "-" );
  /*  while ( token != NULL )
    {
        printf ("%s",token);
        token = my_strtok( NULL, "-");
    }*/
    printf ("\n\n\n %s", token);
    return 0;
}
