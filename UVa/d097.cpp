#include <bits/stdc++.h>

using namespace std ;

int main () {
    int n ;

    while ( cin >> n ) {
        int nums [ 3000 ] = { 0 } ;
        int jolly [ 3000 ] = { 0 } ;
        bool flag = true ;

        for ( int i = 0 ; i < n ; i ++ )
            cin >> nums [ i ] ;

        for ( int i = 0 ; i < n - 1 ; i ++ )
            jolly [ abs ( nums [ i + 1 ] - nums [ i ] ) ] = 1 ;

        for ( int i = 1 ; i <= n - 1 ; i ++ )
            if ( jolly [ i ] == 0 )
                flag = false ;

        cout << ( flag ? "Jolly" : "Not jolly" ) << endl ;
    }

    return 0 ;
}
