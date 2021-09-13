#include <iostream>

using namespace std ;

int main ( void ) {
    int a, b ;

    while ( cin >> a >> b ) {
        a += ( a & 1 ) ;    //The same as a += ( a % 2 )
        b -= ( b & 1 ) ;    //The same as b -= ( b % 2 )

        cout << ( b - a) / 2 + 1 << endl ;
    }
}
