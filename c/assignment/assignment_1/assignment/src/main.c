#include <header.h>
		
int main (void)
{
	int choice;
	int d;
	int s;
	int n;
	int p;
    int i;
    unsigned int x;
	unsigned int number2;
	unsigned int number;
    do {
	printf ( "Please Enter your choice from 1 to 12\n" );
    printf("\n\tMENU\t\n");
    printf("\tPRESS 1 FOR BIT SWAPPING IN A SIGNLE NUMBER\n");
    printf("\tPRESS 2 FOR BIT SWAPPING IN TWO NUMBERS\n");
    printf("\tPRESS 3 FOR BITS COPY FROM ONE NUMBER TO ANOTHER NUMBER\n");
    printf("\tPRESS 4 FOR TOGGLING EVEN AND ODD BITS\n");
     printf("\tPRESS 5 FOR TESTING AND SETTING A BIT\n");
     printf("\tPRESS 6 FOR ROTATING BITS LEFT AND RIGHT\n");
    printf("\tPRESS 7 FOR COUNTING SET BITS AND CLEAR BITS\n");
    printf("\tPRESS 8 FOR COUNTING LEADING AND TRAILING BITS\n");
    printf("\tPRESS 9 FOR SOME BASIC OPERATIONS ON BITS\n");
    printf("\tPRESS 10 FOR SETTING A BITS FROM ONE NUMBER TO OTHER\n");
    printf("\tPRESS 11 FOR INVERTING N BITS GIVEN POSITION\n");
    printf("\tPRESS 12 FOR RETURNING LEFT ADJUSTED BITS\n");
	choice = input ();

	switch ( choice ) 

	{
		case 1: printf ( "Enter the number:\n" );
				number = input ();
				dec2bin ( number );
				printf ( "\nEnter the destination position:\n" );
				d = read_input ();
				printf( "\nEnter the source position:\n" );
                s = read_input ();
				bit_swap (number, s, d);
				break;
		case 2: printf ( "\nEnter the source number:\n" );
                number = input();
                dec2bin ( number );
                printf ( "\nEnter the destination number:\n" );
                number2 = input ();
				dec2bin (number2);
                printf( "\nEnter the source position :\n" );
                s = read_input ();
				printf( "\nEnter the destination position :\n" );
                d = read_input ();
               	bits_swap ( number,  number2, d, s);
				break;
		case 3: printf ( "\nEnter the source number:\n" );
                number = input();
                dec2bin ( number );
                printf ( "\nEnter the destination number:\n" );
                number2 = input ();
                dec2bin (number2);
                printf( "\nEnter the source position :\n" );
                s = read_input ();
                printf( "\nEnter the destination position :\n" );
                d = read_input ();
				printf( "\nEnter the number of bits :\n" );
                n = read_input ();
                dec2bin ( bit_copy ( number, number2, n, s, d));
				break;
		case 4: printf ( "\nEnter the number:\n" );
                number = input();
                dec2bin ( number );
				printf("\nToggled even bits :\n");
			    dec2bin( even_bit_toggle( number) );
    			printf("\nToggled odd bits :\n");
				dec2bin( odd_bit_toggle( number) );
				break;
		case 5: printf ( "\nEnter the number:\n" );
                number = input();
                dec2bin ( number );
                printf ( "\nEnter the position:\n" );
                d = read_input ();
				dec2bin( ts_bits( number, d ) );
				break;
		case 6: printf ( "\nEnter the number:\n Enter--->1 for left rotate\n"
                         "Enter--->2 for right rotate\n"
                         "Enter--->3 for left rotate by n times\n"
                         "Enter--->4 for right rotate by n times\n" );
				d = input ();
				if ( d == 1 ) 
				{
					printf ( "\nEnter the number which you want shift:\n" );
							number = input ();
							dec2bin ( number );
					printf ( "\nLeft rotated number\n" );
							dec2bin ( left_rotate_bits ( number ) );
				}
				else if (d == 2)
				{
					printf ( "\nEnter the number which you want shift:\n" );
                            number = input ();
                            dec2bin ( number);
                    printf ("\nright rotated number\n");
                            dec2bin ( right_rotate_bits (number) );

				} 
				else if ( d == 3 )
				{
					printf ( "\nEnter the number which you want shift:\n" );
                            number = input ();
                            dec2bin ( number);
					printf ( "\nEnter number of times you want to left shift\n" );
							n = input ();
                    printf ("\nLeft rotated number by %d times\n",n);
                            dec2bin (left_rotate_n_bits (number, n) );
			
				}
				else
				{
					printf ( "\nEnter the number which you want shift:\n" );
                            number = input ();
                            dec2bin ( number);
                    printf ( "\nEnter number of times you want to right shift\n" );
                            n = input ();
                    printf ("\nright rotated number by %d times\n",n);
                            dec2bin (right_rotate_n_bits (number, n) );
				}
				break;
		case 7: printf ( "\nEnter the number:\n" );
                number = input();
                dec2bin ( number );
                printf("\nno of set bits are :%d\n",count_bit_set(number ));
                printf("\nno of clear bits : %d\n",count_bit_clear(number ));
                break;
		case 8: printf ( "\nEnter the number:\n" );
                number = input();
                dec2bin ( number );
                printf("\nno of leading set bits are :%d\n",cnt_leading_set_bits(number ));
                printf("\nno of leading clear bits : %d\n",cnt_leading_clear_bits(number ));
                printf("\nno of trailing set bits are :%d\n",cnt_trailing_set_bits(number ));
                printf("\nno of trailing clear bits : %d\n",cnt_trailing_clear_bits(number ));
				break;
		case 10:printf ( "\nEnter the x number:\n" );
                number = input();
                dec2bin ( number );
                printf ( "\nEnter the y number:\n" );
                number2 = input ();
                dec2bin (number2);
                printf( "\nEnter the  position :\n" );
                s = read_input ();
                printf( "\nEnter the no of bits :\n" );
                d = read_input ();
                dec2bin( copy_bits( number, number2, s, d) );
                break;
		case 11:printf ( "\nEnter the x number:\n" );
                number = input();
                dec2bin ( number );
                printf( "\nEnter the  position :\n" );
                p  = read_input ();
                printf( "\nEnter the no of bits :\n" );
                n = read_input ();
                dec2bin( invert ( number, p, n) );
				break;
		case 12:printf ( "\nEnter the x number:\n" );
                x = input();
                dec2bin ( x );
                printf( "\nEnter the  position :\n" );
                p = read_input ();
                printf( "\nEnter the no of bits :\n" );
                n = read_input ();
                number2 = getbits( x, p, n);
                for ( i = n; i > 0; i--)
                {   
                    printf ( "%d", ( number2 & ( 1 << i ) ) >> i );
                }
                break;
         case 9:printf ( "Please Enter your choice from 1 to 9" );
                printf ( "\n1. To find maximum and minimum of 2 numbers \n"
                         "\n2. To clear right most set bit in a number \n"
                         "\n3. To clear left most set bit in a number\n"
                         "\n4. To set right most cleared bit in a number\n"
                         "\n5. To set left most cleared bit in a number\n"
                         "\n6. To set bits from bit position ‘s’ to bit position ‘d’ in a given number and clear rest of the bits\n"
                         "\n7. To clear bits from bit position ‘s’ to bit position ‘d’ in a given number and set rest of the bits\n"
                         "\n8. To toggle bits from bit position ‘s’ to bit position ‘d’ in a given number " );
                choice = input();
                switch ( choice )
                {
                    case 1:printf( "\nEnter the no :\n" );
                           p = input ();
                           printf( "\nEnter the no :\n" );
                           n = input ();
                           printf ("maximum of %d and %d is %d",p,n, MAX( p, n) );
                           printf ("minimum of %d and %d is %d",p,n, MIN( p, n) );
                           break ;
                    case 2:printf( "\nEnter the number :\n" );                      
                           n = input ();
                           dec2bin ( n );
                           dec2bin( CLEAR_RIGHT ( n ) );
                           break;
                    case 3:printf( "\nEnter the number :\n" );                  
                           n = input ();                                        
                           dec2bin ( n );
                           dec2bin( CLEAR_LEFT ( n ) ); 
                           break;
                    case 4:printf( "\nEnter the number :\n" );                  
                           n = input ();                                        
                           dec2bin ( n );
                           printf ("\n");
                           dec2bin( SET_LEFT ( n ) ); 
                           break;
                    case 5:printf( "\nEnter the number :\n" );                  
                           n = input ();                                        
                           dec2bin ( n );
                           dec2bin( SET_RIGHT ( n ) );
                           break;
                    case 6: printf ( "Enter the number:\n" );
                            x = input ();
                            dec2bin ( x );
                            printf ( "\nEnter the source position:\n" );
                            s = read_input ();
                            printf( "\nEnter the destination position:\n" );
                            d = read_input ();
                            dec2bin ( SETBITS( s, d ) );
                            break;
                    case 7: printf ( "Enter the number:\n" );                   
                            x = input ();                                       
                            dec2bin ( x );                                      
                            printf ( "\nEnter the source position:\n" );        
                            s = read_input ();                                       
                            printf( "\nEnter the destination position:\n" );    
                            d = read_input ();                                       
                            dec2bin ( CLEARBITS( s, d ) );                        
                            break;
                    case 8: printf ( "Enter the number:\n" );                   
                            x = input ();                                       
                            dec2bin ( x );                                      
                            printf ( "\nEnter the source position:\n" );        
                            s = read_input ();                                       
                            printf( "\nEnter the destination position:\n" );    
                            d = read_input ();                                       
                            dec2bin ( TOGGLE( x, s, d ) );                      
                            break;
                    default:printf("Invalid Input");       


                           
                }

          default:printf("Invalid Input");       
               

	}
    } while ( choice != 0 );
	return 0;
}	
