#include <stdio.h>
int main(void)
{
	char choice[5];
	printf("Enter Your Choice:\n 8. a. rotate left by n bits \n b. rotate right by n bits \nc. rotate left\n d.rotate right ");
	fgets( choice , sizeof( choice ), stdin);
	switch( atoi( choice ))
	{
		case 1 :
				 dec2bin( left_rotate_n_bits ( 10, 2) );
				break;
	}
	return 0;
}
