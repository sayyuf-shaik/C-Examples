#include "header.h"
extern bit_swap (int number, int s, int d);
extern bit_copy (unsigned number, unsigned int number2,int n,int s, int d);
extern even_bit_toggle( unsigned int number );
extern odd_bit_toggle( unsigned int number );
unsigned int input()
{
	char num[20];
	int i;
	unsigned int temp;
	unsigned int number = 0;
	fgets (num, sizeof( num ), stdin );
	for(i=0 ; num[i]!= '\n'; i++)
	{
		if(num[i] >= '0' && num[i] <= '9')
		{
			temp = num[i] - 48;
			number = number * 10 + temp;	
		}		
		else
		{
			printf("input is invalid");
			exit(0);
		}
	}
	return number;
}

	char num[20];
int main (void)
{
	int choice;
	int d;
	int s;
	int n;
	unsigned int number2;
	unsigned int number;
	printf ( "Please Enter your choice from 1 to 12" );
	printf ( "\n" );
	choice = input();

	switch(choice)

	{
		case 1: printf ( "Enter the number:\n" );
				number = input ();
				dec2bin ( number );
				printf ( "\nEnter the destination position:\n" );
				d = input ();
				printf( "\nEnter the source position:\n" );
                s = input ();
				bit_swap (number, s, d);
				break;
		case 2: printf ( "\nEnter the source number:\n" );
                number = input();
                dec2bin ( number );
                printf ( "\nEnter the destination number:\n" );
                number2 = input ();
				dec2bin (number2);
                printf( "\nEnter the source position :\n" );
                s = input ();
				printf( "\nEnter the destination position :\n" );
                d = input ();
               	bits_swap (number,  number2, d, s);
				break;
		case 3: printf ( "\nEnter the source number:\n" );
                number = input();
                dec2bin ( number );
                printf ( "\nEnter the destination number:\n" );
                number2 = input ();
                dec2bin (number2);
                printf( "\nEnter the source position :\n" );
                s = input ();
                printf( "\nEnter the destination position :\n" );
                d = input ();
				printf( "\nEnter the number of bits :\n" );
                n = input ();
                bit_copy ( number, number2, n, s, d);
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
                d = input ();
				//dec2bin( ts_bits( number, d ) );
				break;


	}
}
