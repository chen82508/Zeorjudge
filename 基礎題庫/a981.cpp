#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std ;

int N, M, a [ 30 ] ;
bool ok = 0 ;

void walk ( int, int, bool* ) ;

int main () {
    scanf ( "%d %d", &N, &M ) ;

    for ( int i = 0 ; i < N ; i ++ )
        scanf ( "%d", &a [ i ] ) ;

    bool S [ 30 ] ;

    sort ( a, a + N ) ;
    memset ( S, 0, sizeof ( S ) ) ;
    walk ( 0, 0, S ) ;

    if ( ok == 0 )
        printf ( "-1" ) ;

    return 0 ;
}

void walk ( int floor, int sum, bool *S ) {
    if ( sum == M ) {
        ok = 1 ;

        for ( int i = 0 ; i < N ; i ++ )
            if ( S [ i ] == 1 )
                printf ( "%d ", a [ i ] ) ;

        printf ( "\n" ) ;
    }

    if ( floor == N || sum >= M )
        return ;

    for ( int i = floor ; i < N ; i ++ ) {
        S [ i ] = 1 ;
        walk ( i + 1, sum + a [ i ], S ) ;
        S [ i ] = 0 ;
    }
}
