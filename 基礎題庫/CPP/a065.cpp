#include <iostream>
#include <cmath>

using namespace std ;

int main () {
    string input ;

    while ( cin >> input ) {
        for ( int i = 0 ; i < 6 ; i ++ ) {
            cout << abs ( ( int ) input [ i ] - input [ i + 1 ] ) ;
        }
        cout << endl ;
    }
    return 0 ;
}
