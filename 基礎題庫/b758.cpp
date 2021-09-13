#include <iostream>
#include <iomanip>

using namespace std ;

int main () {
    int X, Y ;

    while ( cin >> X >> Y ) {
        Y += 30 ;
        cout << setw ( 2 ) << setfill ( '0' ) << ( X += 2 + ( Y / 60 ) ) % 24 << ":" ;
        cout << setw ( 2 ) << setfill ( '0' ) << Y % 60 << endl ;
    }

    return 0 ;
}
