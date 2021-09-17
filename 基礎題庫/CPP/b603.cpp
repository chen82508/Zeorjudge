#include <iostream>
#include <algorithm>

using namespace std ;

int main () {
    int x1, y1, x2, y2 ;

    while ( cin >> x1 >> y1 >> x2 >> y2 ) {
        int a, b, c, d, gcd ;

        a = ( x2 - x1 ) * ( x2 - x1 ) ;
        b = ( y2 - y1 ) ;
        c = -2 * ( y2 - y1 ) * x1 ;
        d = ( y2 - y1 ) * x1 * x1 + ( x2 - x1 ) * ( x2 - x1 ) * y1 ;

        // Remember to reduce the fraction
        //-------------------------------------
        gcd = __gcd ( a, b ), gcd = __gcd ( gcd, c ), gcd = __gcd ( gcd, d ) ;

        cout << a / gcd << "y = " << b / gcd << "x^2 + " << c / gcd << "x + " << d / gcd << endl ;
    }

    return 0 ;
}
