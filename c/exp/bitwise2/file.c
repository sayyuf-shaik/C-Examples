
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
