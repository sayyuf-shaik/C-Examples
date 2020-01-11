#include "header.h"
int main ( void )
{   
    char *input_var = NULL;
    char *output_var;
    char *input_var2 = NULL;
    unsigned int choice;
    int p;
    int n;
    char c;
    do {
    printf( "\tPlease Enter Your Choice\n"
            "\tPress 1 for string copy\n"
            "\tPress 2 for string copy upto some limit\n"
            "\tPress 3 for tracing a character in the buffer\n"
            "\tPress 4 for concatination of string\n"
            "\tPress 5 for concatination of string upto n character\n"
            "\tPress 6 for string comparision\n"
            "\tPress 7 for string comparision ignoring case\n"
            "\tPress 8 to count initial set of characters match\n"
            "\tpress 9 for strtok\n"
            "\tPress 10 to get palindrome\n"
            "\tPress 11 to get reverse\n"
            "\tPress 12 to get squeezed output\n"
            "\tPress 13 to check whether string is rotated or not\n"
            "\tPress 14 to remove substring\n"
            "\tPress 15 to insert character in a string\n" );
    printf ( "Enter your choice: " );
    choice = input ();
    __fpurge(stdin);
    switch(choice)
    {
        case 1:printf("Enter the String:\n");
               input_var =  malloc_input( );
               input_var2 = ( char * ) malloc ( sizeof(char) * BUF);
               str_cpy ( input_var2, input_var );
               printf ( "\n%s", input_var2 );
               break;
        case 2:printf("Enter the String:\n");
               input_var =  malloc_input( );
               input_var2 = ( char * ) malloc ( sizeof(char) * BUF);
               printf("Enter the number of characters to copy\n");
               n = input ( );
               strn_cpy ( input_var2, input_var, n );
               printf ( "\n%s", input_var2);
               break;
        case 4:printf("Enter the String:\n");
               input_var =  malloc_input( );
               printf("Enter the String:\n");
	           input_var2 = malloc_input( );
               output_var = sappend ( input_var, input_var2 );
               printf ( "\n%s", output_var);
               break;
        case 3:printf("Enter the String:\n");
	           input_var =  malloc_input( );
               printf("Enter the Character u want print:\n");
	           c = getchar();
               __fpurge(stdin);
	           output_var = chr_add_instr( input_var, c ); 
               printf ( "\n%p", output_var);
               break;
	     case 5:printf("Enter the String:\n");
               input_var = malloc_input();
               printf("Enter the String:\n");
               input_var2 = malloc_input();
	           printf("Enter the n value\n");
	           p = input ( );
               output_var = snappend( input_var, input_var2, p);
               printf("\n %s",output_var );
               break;
        case 6:printf("Enter the first string");
               input_var = malloc_input ();
               printf("Enter the second string");
               input_var2 = malloc_input ();
               printf ( "%d", strcmp ( input_var, input_var2 ) );
               break;
        case 7:printf("Enter the first string");
               input_var = malloc_input ();
               printf("Enter the second string");
               input_var2 = malloc_input ();
               printf ( "%d", strcasecmp ( input_var, input_var2 ) );
               break;
        case 8:printf("Enter the first string");
               input_var = malloc_input ();
               printf("Enter the second string");
               input_var2 = malloc_input ();
               printf ( " The mindex is %lu " , str_spn ( input_var, input_var2 ) );
               printf ( " The bindex is %lu " , strspn ( input_var, input_var2 ) );
               break;
        case 11:printf("Enter the string");
               input_var = malloc_input ();
               printf ( "The Reverse String is %s", rev_str ( input_var) );
               break;
        case 10:printf("Enter the string");
               input_var = malloc_input ();
               if ( palindrome ( input_var ) ) 
                   printf ( " %s is palindrome ", input_var );
               else
                   printf ( " %s is not palindrome ", input_var );
               break;
        case 12:printf("Enter the string: ");
        		input_var = malloc_input();
		        squeeze ( input_var );
		        break;
        case 13:printf( "\nEnter the string: ");
                input_var = malloc_input ( );
                printf( "\nEnter the rotated string: ");
                input_var2 = malloc_input ( );
                n = strrot ( input_var, input_var2 );
                if ( n )
                    printf("\nString is rotated");
                else
                    printf("\nString is not rotated");

                break;
        case 14:printf("\nEnter the string");
                input_var = malloc_input ( );
                printf("\nEnter the sub string");
                input_var2 = malloc_input ( );
                printf("\n%s", remsstr( input_var, input_var2 ));
                break;
        case 15:printf( "Enter the string: ");
                input_var = malloc_input();
                printf("Enter the character :");
                c = (char)getc(stdin);
                __fpurge ( stdin );
                printf("Enter the position :");
                p = input();
                printf("The modified string is %s ", insertchar ( input_var, c, p ) );
                break;
		case 9:printf ( "Enter the string :\n");
				input_var = malloc_input ( );
				printf( "Enter the delimiter :\n" );
				input_var2 = malloc_input ( );
				output_var = strtok ( input_var , input_var2 ); 
				while ( output_var != NULL ) {
					printf ( "%s\n",output_var);
					output_var = strtok ( NULL , input_var2 ); 
				}
				break;




					 
            
    }  
    } while ( choice != 0 );
    return 0;
}

