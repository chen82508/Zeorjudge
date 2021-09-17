#include <bits/stdc++.h>

using namespace std ;

int main () {
    int T, M, N ;

    cin >> T ;

    while ( T -- ) {
        cin >> N >> M ;

        int Map [ 64 ] [ 64 ] ;

        for ( int i = 0 ; i < N ; i ++ )
            for ( int j = 0 ; j < M ; j ++ ) cin >> Map [ i ] [ j ] ;

        int result = 1 ;

        for ( int i = 0 ; i < N ; i ++ )
            for ( int j = 0 ; j < M ; j ++ ) result &= Map [ i ] [ j ] == Map [ N - i - 1 ] [ M - j - 1 ] ;

        cout << ( result == 1 ? "go forward" : "keep defending" ) << endl ;
    }

    return 0 ;
}
