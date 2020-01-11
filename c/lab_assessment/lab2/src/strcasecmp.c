#include <header.h>
//#include <stdio.h>
//#include <string.h>
int my_abs(int j)
{
    if ( j >= 0)
        return j;
    else
        return -j;
}

int strcasecmp( const char *s1, const char *s2 )
{
    int flag = 0;
    int i =0;
    while ( ( ( my_abs ( *( s1 + i ) - *( s2 + i ) ) == 32 ) || ( * ( s1 + i ) == *( s2 + i) ) ) && ( *( s1 + i ) != '\n' && *( s2 + i) ) )
    {
       if  (( ( *( s1 + i ) >= 'A' && *( s1 + i ) <= 'Z') || ( *( s1 + i ) >= 'a' && *( s1 + i ) <= 'z') ) && ( ( *( s2 + i ) >= 'A' && *( s2 + i ) <= 'Z') || ( *( s2 + i ) >= 'a' && *( s2 + i ) <= 'z') ) )
           
          // s1++;
           //s2++;
           flag = 1;
           i++;
    }
     i++;
        if ( *( s1 + i ) == '\0' && *( s2 + i) == '\0' && flag == 1 ) 
            return 0; 
        else if ( *s1 < *s2 )                                               
            return -1;    
        else
            return 1;
}
/*int main ( void )
{
    char *s1 = "Abcde";
    char *s2 = "abcde";
    int ret_val = strcasecmp ( s1, s2 );
    printf("%d ", ret_val);
    return 0;
}*/

