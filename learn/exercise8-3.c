#include <stdio.h>
#define MAXN 10

void ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;
    
    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);
    
    ArrayShift(a, n, m);
    
    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    
    return 0;
}

void ArrayShift( int a[], int n, int m ){
    int *d = a;
    int c = m-1;
    int s[m];
    for (int i = n-1; i >= 0 ; i--)
    {
        if(c>=0){
            s[c]= a[i];
            c--;

        }
        if(i<(n-m)){
            *(d+i+m) =*(d+i);
        }
    }
    for (size_t i = 0; i < m; i++)
    {
        c++;
         *(d+c) = s[i];
         
    }
    
    
}


