unsigned int right_rotate_bits (unsigned int num)
{
	num = num >> 1;
	num = num | (num << 31);
	return num;
}
