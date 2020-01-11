unsigned int invert (unsigned int x, int p, int n)
{
	unsigned int mask = ~ ( 0 );
	mask = ~ ( mask << n);
	mask = mask <<( p - 1 );
	x = x ^ mask;
	return x;
}
