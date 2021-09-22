#include <iostream>

using namespace std ;

int num [ 200 ] = { 0 } ;
int S, N ;

int main () {
    for ( int i = 0 ; i < 2 ; i ++ ) {
        while ( 1 ) {
            cin >> S ;
            if ( S == -1 ) break ;

            cin >> N ;
            num [ S ] += N ;
        }
    }

    for ( int i = 0 ; i < 200 ; i ++ )
        if ( num [ i ] )
            cout << i << " " << num [ i ] << endl ;

    return 0 ;
}
