#include<stdio.h>

int func( int n )
{
    if( n == 1 )
        return 1;
    else if( n == 2 )
        return 2;
    else
        return func( n - 1 ) + func( n - 2 );
}

int main()
{
    int a = 3;
    a = 3 * 4 + 5;
    a = 67;
    a = func( a );
    a = func( 5 );
    a = 3;
    printf("%d",a);
}