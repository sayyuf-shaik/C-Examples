#include <stdio.h>
void swap ( int *x,int *y ) 
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int partition ( int *a, int p, int r )
{
    int j = p ;
    int x;
    int i;
    x = a[r];
    i = p - 1;
    for( j = p;j < r;j++)
    {
        if(a[j] <= x ) {
            i = i + 1;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[r]);
    return i+1;
}

void quick_sort(int *a, int p,int r )
{
    int q;
    if ( p < r ) {
        q = partition(a,p,r);
        quick_sort(a,p,q-1);
        quick_sort(a,q + 1,r);
    }
}


int main ( void )
{
    int a[50];
    int n;
    int p;
    int r;
    int i;
    printf("Enter the size of Array: \n");
    scanf("%d",&n);
    for(i = 0;i<n;i++) { //input of the Arrray
        scanf("%d",&a[i]);
    }
    p = 0;
    r = n - 1;
    printf("\nBefore sorting\n");
    for( i = 0; i < n ; i++) { //display the ARRAY
        printf("%d ",a[i]);
    }
    quick_sort(a,p,r);

    printf("\nAfter sorting\n");
    for( i = 0; i < n ; i++) { //display the ARRAY
        printf("%d ",a[i]);
    }
}


