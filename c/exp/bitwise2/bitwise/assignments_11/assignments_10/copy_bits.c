unsigned int copy_bits( unsigned int x, int p, unsigned int y, int n)
{
	return x = x |( (y & ( ~ ( ~0 << n ) )) << p  );
	
}
