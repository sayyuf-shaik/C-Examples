nclude <stdio.h>
int main(void)
{
    char choice[5];
    char number[10];
    char times[10];
    printf("Enter Your Choice:\n 9. a. rotate left by n --> 1bits \n b. rotate right by n bits ---> 2\nc. rotate left -->3\n d.rotate right --->4");
    fgets( choice , sizeof( choice ), stdin);
    switch( atoi( choice ))
    {
        case 1 : printf("Enter number: ");
                 fgets( number , sizeof( number ), stdin);
                 printf("Enter number of times to shift: ");
                 fgets( times , sizeof( times ), stdin);
                 dec2bin( left_rotate_n_bits ( atoi(number), atoi(times)) );
                 break;
        case 2  :printf("Enter number: ");
                 fgets( number , sizeof( number ), stdin);
                 printf("Enter number of times to shift: ");
                 fgets( times , sizeof( times ), stdin);
                 dec2bin( right_rotate_n_bits ( atoi(number), atoi(times)) );
                 break;
        case 3: printf("Enter number: ");
                fgets( number , sizeof( number ), stdin);
                dec2bin( right_rotate_bits ( atoi( number )) );
                break;
        case 4: printf("Enter number: ");
                fgets( number , sizeof( number ), stdin);
                dec2bin( left_rotate_bits ( atoi( number )) );
                break;
        default :printf("Invalid Input");



    }
    return 0;

