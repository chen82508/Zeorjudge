#include <stdio.h>

#define find(a) while(!(iSort[a][ucNum[a]]%3))ucNum[a]++

int iSort [ 4 ] [ 256 ] ;

int main ( void ) {
    unsigned char ucNum [ 4 ] ;

    while ( scanf ( "%u", ( unsigned int* ) ucNum ) != EOF ) {
        iSort [ 0 ] [ ucNum [ 0 ] ] ++ ;
        iSort [ 1 ] [ ucNum [ 1 ] ] ++ ;
        iSort [ 2 ] [ ucNum [ 2 ] ] ++ ;
        iSort [ 3 ] [ ucNum [ 3 ] ] ++ ;
    }

    *( unsigned int* ) ucNum = 0 ;

    find ( 0 ) ;
    find ( 1 ) ;
    find ( 2 ) ;
    find ( 3 ) ;

    printf ( "%u\n", *( unsigned int* ) ucNum ) ;

    return 0;
}
