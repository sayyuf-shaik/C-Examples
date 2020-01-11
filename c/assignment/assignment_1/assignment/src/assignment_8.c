#include <header.h>
int cnt_lead_set;
int cnt_lead_clear;
int cnt_trail_clear;
int cnt_trail_set;

int cnt_leading_set_bits( unsigned int number  )
{
	int i = 0;
	for(i = 0; i < INT_SIZE ; i++ )
	{
		if(number & (1 << i) )
			cnt_lead_set++;
		else if(cnt_lead_set == 0 && ( (number & ( 1<< i)) == 0))
			continue;
		else
			break;
	}
	return cnt_lead_set;
 }

int cnt_leading_clear_bits( unsigned int number  ) {
	int i = 0;
	for(i = 0; i < INT_SIZE ; i++ )
    {
        if( (number  & (1 << i)) == 0)
            cnt_lead_clear++;
        else if(cnt_lead_clear == 0 && (number >> i))
            continue;
        else
            break;
    }

    return cnt_lead_clear;
}

int cnt_trailing_clear_bits( unsigned int number  )
{
	int i = 0;
	for(i = ( INT_SIZE - 1 ) ; i >= 0 ;i-- )
    {
        if( (number  & (1 << i)) == 0)
            cnt_trail_clear++;
        else if(cnt_trail_clear == 0 && (number &( 1 >> i)) )
            continue;
        else
            break;
    }

	return cnt_trail_clear;
}

int cnt_trailing_set_bits( unsigned int number  )
{
	int i = 0;
	for(i = ( INT_SIZE - 1 ) ; i >= 0 ; i-- )
    {
        if( (number  & (1 << i)))
            cnt_trail_set++;
        else if(cnt_trail_set == 0 && (number >> i) == 0)
            continue;
        else
            break;
    }

    return cnt_trail_set;
	
}
















