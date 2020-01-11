#include <header.h>

int str_case_cmp( const char *str1, const char *str2 )
{
    int flag = 0;
    int i =0;
    if ( valid_string ( str1 ) == 0 || valid_string ( str2 ) == 0 ) {
        return 2;
    }
        while ( ( (( *( str2 + i ) - *( str1 + i ) ) == 32 ) || ( ( *( str1 + i ) - *( str2 + i ) ) == 32 ) || ( * ( str1 + i ) == *( str2 + i) ) ) && ( *( str1 + i ) != '\n' && *( str2 + i) != '\n' ) )
        {
             if  (( ( *( str1 + i ) >= 'A' && *( str1 + i ) <= 'Z') || ( *( str1 + i ) >= 'a' && *( str1 + i ) <= 'z') ) && ( ( *( str2 + i ) >= 'A' && *( str2 + i ) <= 'Z') || ( *( str2 + i ) >= 'a' && *( str2 + i ) <= 'z') ) )
                flag = 1;
             else if  (* ( str1 + i ) == *( str2 + i) )
                        flag = 2;
                
                i++;
    }
        i++;
            if ( *( str1 + i ) == '\0' && *( str2 + i) == '\0' && flag == 1 || flag == 2 ) 
                return 0; 
            else if ( *str1 < *str2 )                                               
                return -1;    
            else
                return 1;
}

