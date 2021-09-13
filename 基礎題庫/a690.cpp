#include <iostream>

using namespace std ;

int main () {
    int n ;

    while ( cin >> n ) {
        cout << "[" ;

        for ( int i = n ; i > 1 ; i -- ) cout << i << " " ;

        for ( int i = 1 ; i <= n ; i ++ ) {
            if ( i >= 2 ) cout << " " << i ;
            else cout << i ;
        }

        cout << "]" << endl ;
    }

    return 0 ;
}
