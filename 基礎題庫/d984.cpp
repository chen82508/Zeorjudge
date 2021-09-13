#include <bits/stdc++.h>

using namespace std ;

struct Data {
    long long x, y ;
} D [ 3 ] ;

int main () {
    while ( cin >> D [ 0 ].x >> D [ 1 ].x >> D [ 2 ].x ) {
        D [ 0 ].y = 0, D [ 1 ].y = 1, D [ 2 ].y = 2 ;

        if ( D [ 0 ].x > D [ 2 ].x ) swap ( D [ 0 ], D [ 2 ] ) ;
        if ( D [ 1 ].x > D [ 2 ].x ) swap ( D [ 1 ], D [ 2 ] ) ;
        if ( D [ 0 ].x > D [ 1 ].x ) swap ( D [ 0 ], D [ 1 ] ) ;

        D [ 1 ].x += D [ 0 ].x ;

        if ( D [ 1 ].x > D [ 2 ].x ) cout << static_cast<char>( D [ 1 ].y + 'A' )<< endl ;
        else cout << static_cast<char>( D [ 2 ].y + 'A' ) << endl ;
    }

    return 0 ;
}
