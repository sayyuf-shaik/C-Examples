#include <stdio.h>
//int i;
//int j;

int cnt_leading_set_bits( unsigned int number  )
{
	int i;
	int cnt_lead_set = 0;
	//while( number & ( 1 << i  ) ) {
	for(i = 0; i < 32 ;i++)
	{ 
		if( number & ( 1 << i))
			cnt_lead_set++;

	}
	return cnt_lead_set;
 }

int cnt_leading_clear_bits( unsigned int number  )
{
	int cnt_lead_clear = 0;
	int i = 0;
    while( ( number & ( 1 << i ) ) == 0 ) {
		cnt_lead_clear++;

		i++;
	}
    return cnt_lead_clear;
}

int cnt_trailing_clear_bits( unsigned int number  )
{
    int cnt_trail_clear = 0;
	int j = 0;
	while( ( number & ( 31 << j ) ) == 0 ) {
        cnt_trail_clear++;
        j++;
    }
	return cnt_trail_clear;
}

int cnt_trailing_set_bits( unsigned int number  )
{
    int cnt_trail_set = 0;
	int j = 0;
	while( ( number & ( 31 <<  j ) ) ) {
        cnt_trail_set++;
        j++;
    }
	return cnt_trail_set;
}

int main( void )
{

    char array[20];
	unsigned int number;
    printf("Enter the number :");
    fgets( array , sizeof( array ), stdin);
	number = atoi( array );
	dec2bin( number );
//	if( number & 1  )
///	{
    	printf("\nNumber of leading set bits : %d", cnt_leading_set_bits(number ));
//	}
//	else
//	{
  //  	printf("\nNumber of leading clear bits : %d", cnt_leading_clear_bits(number ));
//	}
    //printf("\nNumber of trailing clear bits : %d",cnt_trailing_clear_bits(number ));
	//printf("\nNumber of trainling set bits : %d",cnt_trailing_set_bits( number ));
	return 0;
}


