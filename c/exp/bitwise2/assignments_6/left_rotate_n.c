unsigned int left_rotate_n_bits ( unsigned int number, int n )
{
	number = number << n;
	number =number | ( number >> ( 32 - n));
 	return number;
}
