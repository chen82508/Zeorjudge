#include <cstdio>
#include <algorithm>

int main () {
    int n, a [ 10 ] ;

    while ( scanf ( "%d", &n ) == 1 ) {
        for ( int i = 0 ; i < n ; i ++ )
            a [ i ] = n - i ;

        do {
            for ( int i = 0 ; i < n ; i ++ )
                putchar ( a [ i ] + '0' ) ;

            puts ( "" ) ;
        }
        while ( std :: prev_permutation ( a, a + n ) ) ;
    }

    return 0 ;
}
