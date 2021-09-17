#include <bits/stdc++.h>

using namespace std ;

int main () {
    long long stair [ 100 ] ;

    stair [ 1 ] = 1 ;
    stair [ 2 ] = 2 ;

    for ( int i = 3 ; i < 100 ; i ++ )
        stair [ i ] = stair [ i - 1 ] + stair [ i - 2 ] ;

    int n ;

    while ( cin >> n )
        cout << stair [ n ] << endl ;

    return 0 ;
}
