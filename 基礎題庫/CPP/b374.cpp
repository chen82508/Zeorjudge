#include <iostream>

using namespace std ;

int main () {
    int length ;

    while ( cin >> length ) {
        int CNT [ 30001 ] = { 0 } ;
        int temp ;

        for ( int i = 0 ; i < length ; i ++ ) {
            cin >> temp ;
            CNT [ temp ] ++ ;
        }

        int maximum = -1 ;
        for ( int i = 0 ; i < 30001 ; i ++ )
            if ( CNT [ i ] > maximum )
                maximum = CNT [ i ] ;

        for ( int i = 0 ; i < 30001 ; i ++ )
            if ( CNT [ i ] == maximum )
                cout << i << " " << CNT [ i ] << endl ;
    }

    return 0 ;
}
