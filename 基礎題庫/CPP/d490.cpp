/**********************************************
 *
 * Use operator "&" to judge it is odd or even.
 * Then use trapezoidal method find the sum.
 *
 **********************************************/

#include <iostream>

using namespace std ;

int main ( void ) {
    long long a, b ;

    while ( cin >> a >> b ) {
        a & 1 == 1 ? a ++ : a += 0 ;
        b & 1 == 1 ? b -- : b -= 0 ;

        cout << ( ( a + b ) * ( b - a  + 2 ) >> 2 ) << endl ;
    }
}
