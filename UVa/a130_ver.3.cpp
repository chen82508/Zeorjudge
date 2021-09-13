#include <bits/stdc++.h>
#define maxn 100+1

using namespace std ;

int main () {
    int T, j = 1 ;
    scanf ( "%d", &T ) ;

    while ( T -- ) {
        char s [ 15 ] [ maxn ] ;
        int r [ 15 ] = { 0 }, maxi = -1 ;

        for ( int i = 0 ; i < 10 ; i ++ ) {
            scanf ( "%s %d", s [ i ], &r [ i ] ) ;
            maxi = max ( maxi, r [ i ] ) ;
        }

        printf ( "Case #%d:\n", j ++ ) ;

        for ( int i = 0 ; i < 10 ; i ++ )
            if ( maxi == r [ i ] )
                printf ( "%s\n", s [ i ] ) ;
    }

    return 0 ;
}
