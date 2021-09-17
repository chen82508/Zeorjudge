/*使用行列式解法*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std ;

int main () {

    double a1, b1, c1, a2, b2, c2 ;
    double Delta, DeltaX, DeltaY ;

    while ( cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 ) {

        Delta = a1 * b2 - a2 * b1 ;
        DeltaX = b2 * c1 - b1 * c2 ;
        DeltaY = a1 * c2 - a2 * c1;

        cout << fixed << setprecision ( 2 ) ;
        if ( Delta != 0 )
            cout << "x=" << DeltaX / Delta << endl << "y=" << DeltaY / Delta << endl ;

        if ( Delta == 0 && pow ( DeltaX, 2 ) + pow ( DeltaY, 2 ) != 0 )
            cout << "No answer" << endl ;

        if ( Delta == 0 && DeltaX == 0 && DeltaY == 0 )
            cout << "Too many" << endl ;

    }

    return 0 ;

}
