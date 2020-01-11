#include <stdio.h>
#include <stdlib.h>
 typedef int (*arr)(int ,int );     
int add ( int a, int b )
{
    return a + b;
}
int sub ( int a, int b )
{
    return a - b;
}
int mul ( int a, int b )
{
    return a * b;
}
int divi ( int a,int b )
{
    return a / b;
}

int call_back( arr f,int a,int b)
{
    return (f)(a,b);
}
int main ( void ) 
{
    int a;
    int b;
    int choice;
    char *buf = NULL;
    buf = ( char * ) malloc(sizeof(char)*256);
    printf("Enter the value ");
    fgets(buf,sizeof(int),stdin);
    a = atoi(buf);
    printf("Enter the value ");
    fgets(buf,sizeof(int),stdin);
    b = atoi(buf);
    printf("Enter the choice ");
    fgets(buf,sizeof(int),stdin);
    choice = atoi(buf);
   // typedef int (*arr)(int ,int );
    //int (*arr[4])(int ,int ) = { add, sub, mul, div };//array of function pointers
    //int choice = 2;
    switch(choice)
    {
        case 1:printf("ADD = %d", call_back( add , a , b ));
               break; 
        case 2:printf("SUB = %d", call_back( sub , a , b ));
               break; 
        case 3:printf("MUL = %d", call_back( mul , a , b ));
               break; 
        case 4:printf("DIV = %d", call_back( divi , a , b ));
               break; 
    }
    return 0;
}

