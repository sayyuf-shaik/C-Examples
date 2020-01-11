#include "header.h"

int input (  )
{	
        char *str = ( char * ) malloc ( CHAR_SIZE * BUF );
        if ( str == NULL ) {
            printf("Error in malloc\n");
            exit( 0 );
        }
		int num=0;
		int i=0;
		int j=1;
		int c=0;//calculates string length
		while(j!=0){
			__fpurge(stdin);
			if(NULL == (fgets(str,sizeof(str),stdin))){
			perror("fgets failed");
			exit(0);
			}
        c = 0;
		while(*str != '\n'){
		    c++;
		    str++;
		}
        //c = 0;
		str=str-c;
				
		if(*str == '+' || *str == '-' || *str == ' ') {
		    for(i = 1; i < c ; i++){
			    if(  *(str+i) >='0' &&  *(str+i) <='9') {
			        num=( *(str+i)-48 )+ num*10;
    	        }   

		        else {
		            printf("Enter valid input\n");
			        j=1;
			        break;
			    }
		    }   
		}
		else {
		    for(i = 0; i < c ; i++) {
			    if(  *(str+i) >='0' &&  *(str+i) <='9') {
				    num=( *(str+i)-48 )+ num*10;

				}

				else {
				    printf("Enter valid input\n");
					j=1;
					break;
				}
				}
		}



        if( i == c) {
		    j--;
			return num;
	    }
	}
	return 0;


}	
