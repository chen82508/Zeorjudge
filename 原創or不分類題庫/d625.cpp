#include <iostream>

using namespace std ;

int main () {
    char landminesMap [ 100 ] [ 101 ] ;
    int countMap [ 100 ] [ 100 ] = { 0 } ;
    int n ;

    cin >> n ;

    for ( int i = 0 ; i < n ; i ++ )
        for ( int j = 0 ; j < n ; j ++ ) {
            cin >> landminesMap [ i ] [ j ] ;

            if ( landminesMap [ i ] [ j ] == '*' )
                for ( int vx = -1 ; vx < 2 ; vx ++ )
                    for ( int vy = -1 ; vy < 2 ; vy ++ )
                        if ( i + vx > -1 && i + vx < n && j + vy > -1 && j + vy < n )
                            countMap [ i + vx ] [ j + vy ] ++ ;
        }

    for ( int i = 0 ; i < n ; i ++ ) {
        for ( int j = 0 ; j < n ; j ++ ) {
            if ( landminesMap [ i ] [ j ] == '*' )
                cout << "*" ;
            else {
                if ( countMap [ i ] [ j ] )
                    cout << countMap [ i ] [ j ] ;
                else
                    cout << "-" ;
            }
        }

        cout << "\n" ;
    }

    return 0 ;
}
