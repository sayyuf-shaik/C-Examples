#include <stdio.h>
int is_vowel ( char str ) 
{
     if ( ( str == 'a' || str == 'e' || str == 'i'|| str == 'o'|| str == 'u') )  {

         return 1;
     }

     else if ( str == 'A' || str == 'E' || str == 'I'|| str == 'O'|| str == 'U') { 

         return 1;

         }
     else
         return 0;
}
void is_order ( char str[] , int n) 
{
    int i;
    int j;
    char temp;
    
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = i + 1 ; j < n ; j++ ) {

            if ( ( !is_vowel ( str[i]) ) && ( is_vowel(str[j]) ) ){
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            break;
        }

        }

    }

    printf("%s",str);

}
        

int main ( void ) 
{
   // char str[30];
    char temp;
    int i = 0;
    int j = 1;
    int n;

    printf("Enter the no:");
    scanf("%d",&n);
    char str[n];
    printf("Enter the string:");
    scanf("%s",str);
    
   
    /*for(i = 0 ; i  < 6;i++) {
        for ( j = i */

    for ( i = 0 ; i < n ; i++ ) {
        for ( j = i + 1 ; j < n ; j++ ) {

            if ( str[i] > str[j] ){
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
        
    }
    }



//    printf("%s",str);

    is_order(str , n );
    

    return 0;
}

