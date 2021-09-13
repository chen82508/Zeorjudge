#include <cstdio>

using namespace std ;

int main () {
    char url [ 10 ] [ 101 ] ;
    int n, array [ 10 ] ;
    scanf ( "%d", &n ) ;

    for ( int i = 0 ; i < n ; i ++ ) {

        for ( int j = 0 ; j < 10 ; j ++ )
            scanf ( "%s %d", url [ j ], &array [ j ] ) ;

        int max = 0 ;
        int elcet [ 10 ], count = 0 ;

        max = array [ 0 ] ;
        elcet [ count ++ ] = 0 ;

        for ( int j = 1 ; j < 10 ; j ++ ) {
            if ( array [ j ] == max )
                elcet [ count ++ ] = j ;
            else if ( array [ j ] > max ) {
                max = array [ j ] ;
                count = 0 ; // Return to zero
                elcet [ count ++ ] = j ;
            }
        }

        printf ( "Case #%d:\n", i + 1 ) ;

        for ( int k = 0 ; k < count ; k ++ )
            printf ( "%s\n", url [ elcet [ k ] ] ) ;
    }

    return 0 ;
}
