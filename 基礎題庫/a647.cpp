/********************************************
 *
 * Use EPS to prevent the error.
 * Plus the EPS when the result is positive.
 * Minus the EPS when the result is negative.
 * The default output width should set 6.
 *
 ********************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
#define EPS 1e-9

typedef long double LD ;

using namespace std ;

int Goods ;

int main () {
    cin >> Goods ;

    while ( Goods -- ) {
        LD Inves, Price ;

        cin >> Inves >> Price ;

        LD Ans = ( Price / Inves - 1 ) * 100 ;

        // setw ( 6 ) is equal to %Lf
        //-------------------------------------
        if ( Ans > -EPS )
            cout << setw ( 6 ) << fixed << setprecision ( 2 ) << Ans + EPS << "% " ;
        else
            cout << setw ( 6 ) << fixed << setprecision ( 2 ) << Ans - EPS << "% " ;

        if ( Price / Inves - 1 > 0.1 - EPS || Price / Inves - 1 < - 0.07 + EPS )
            cout << "dispose" << endl ;
        else
            cout << "keep" << endl ;
    }

    return 0 ;
}
