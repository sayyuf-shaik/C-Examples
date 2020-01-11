#include "header.h"
int main ( void ) 
{
    int choice;
    int pos;
    int snum;
    int dnum;
    int spos;
    int dpos;
    int n;
    /*char *buf = ( char * ) malloc ( INT_SIZE * BUF );
    if ( buf == NULL ) {
        printf ( "Malloc Error\n" );
        exit ( 0 );
    }*/
    do {
        printf( "Enter the choice\n"
                "1->bitcopy\n"
                "2->setbits\n"
                "3->invert\n"
                "4->getbits\n" );
        choice = input ( );
        switch ( choice )
        {
            case 1:printf ( "Enter the snum: \n" );
                   snum = input ( );
                   printf ( "Enter the dnum: \n" );
                   dnum = input ( );
                   printf ( "Enter the spos: \n" );
                   spos = read_input ( );
                   printf ( "Enter the dpos: \n" );
                   dpos = read_input ( );
                   printf ( "Enter the n value: \n" );
                   n = read_input ( );
                   dec2bin ( snum );
                   printf ( " %d ", bitcopy ( &snum, &dnum, n ,spos, dpos ));
                   break;
            case 2:printf ( "Enter the snum: \n" );
                   snum = input ( );
               dec2bin(snum);
               printf ( "Enter the dnum: \n" );
               dnum = input ( );
               dec2bin(dnum);
               printf ( "Enter the pos: \n" );
               pos = read_input ( );
               printf ( "Enter the n value: \n" );
               n = read_input ( );
               /*printf ( " %d ", */dec2bin(setbits ( &snum, &dnum, pos , n ));
               break;
        case 3:printf ( "Enter the snum: \n" );
               snum = input ( );
               printf ( "Enter the pos: \n" );
               pos = read_input ( );
               printf ( "Enter the n value: \n" );
               n = read_input ( );
               dec2bin ( snum );
               printf ( " %d ", invert ( &snum, pos, n ));
               break;
        case 4:printf ( "Enter the snum: \n" );
               snum = input ( );
               printf ( "Enter the pos: \n" );
               pos = read_input ( );
               printf ( "Enter the n value: \n" );
               n = read_input ( );
               dec2bin ( snum );
               printf ( " %d ", getbits ( &snum, pos, n ));
               break;
        }

    }while ( choice != 0 );
        
        return 0;
    }
