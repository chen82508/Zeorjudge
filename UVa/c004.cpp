/***************************************************
 *
 * Let the bigger one be a, the smaller one be b
 * Then the two inputs are s = a + b, d = a - b
 * Find the relation between the score
 * And distinguish what kind of score is impossible.
 *
 ***************************************************/

#include <iostream>

using namespace std ;

int main () {
    int n, s, d ;

    while ( cin >> n ) {
        for ( int i = 0 ; i < n ; i ++ ) {
            cin >> s >> d ;

            if ( ( s + d ) % 2 || ( s - d ) % 2 || ( s + d ) / 2 < 0 || ( s - d ) / 2 < 0 )
                cout << "impossible" << endl ;
            else
                cout << ( ( s + d ) >> 1 ) << " " << ( ( s - d ) >> 1 ) << endl ;
        }
    }

    return 0 ;
}
