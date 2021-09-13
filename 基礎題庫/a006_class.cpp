#include <iostream>
#include <cmath>

using namespace std ;

class QuadraticEquation {

public :

    FindRootType ( int CoefficientA, int CoefficientB, int CoefficientC ) {
        int D = ( pow ( CoefficientB, 2 ) - 4 * CoefficientA * CoefficientC ) ;
        int x1 = ( -CoefficientB + sqrt ( D ) ) / ( 2 * CoefficientA ),
            x2 = ( -CoefficientB - sqrt ( D ) ) / ( 2 * CoefficientA ) ;

        if ( D < 0 )
            cout << "No real root" << endl ;

        else if ( D == 0 )
            cout << "Two same roots x=" << x1 << endl ;

        else
            cout << "Two different roots x1=" << x1 << " , x2=" << x2 << endl ;
    }
};

int main () {
    int a, b, c ;

    while ( cin >> a >> b >> c ) {
        QuadraticEquation pt = QuadraticEquation() ;
        pt.FindRootType ( a, b, c ) ;
    }

    return 0 ;
}
