#include <stdio.h>
int main ( void )
{
    //int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    //int *ptr[3][3] = {arr};
    //int (*a)[] = {arr};
    //int *a = NULL;
    //a = arr;
    //int **pptr = ptr;
    int i;
    int j;
    int m;
    int n;
    printf("Enter the m: ");
    scanf("%d",&m);
    printf("Enter the n: ");
    scanf("%d",&n);
   
    int *row = NULL;
    row = ( int * ) malloc ( sizeof(int)*m);
    for( i = 0;i<n;i++) {
    *( row + i ) = (int * )malloc(sizeof(int)*n); 
    }
    

    //INPUT
    for(i=0;i<m;i++) {
	for(j=0;j<n;j++) {
		scanf("%d",((row+i)+j));
	}
	}
    //outPUT
    for(i=0;i<m;i++) {
	for(j=0;j<n;j++) {
		printf("%d ",*((*row+i)+j));
	}
	}
     
    
    //printf("%p\n",pptr);
    //printf("%d",*(*(pptr) + 1) + 2);
    return 0;
}
