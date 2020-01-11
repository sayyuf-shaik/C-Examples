unsigned int copy_bits( unsigned int x, int p, unsigned int y, int n)
{
	y = y & ( ( ~0 << n ) << p );
	x = x & y;
	return x;
}
