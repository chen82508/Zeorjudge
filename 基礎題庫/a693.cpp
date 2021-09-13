#include <iostream>

using namespace std ;

int main () {
    int Quantity, line, food [ 100000 ] ;

    while ( cin >> Quantity >> line ) {
        for ( int i = 0 ; i < Quantity ; i ++ )
            cin >> food [ i ] ;

        for ( int j = 0 ; j < line ; j ++ ) {
            int left, right, sum = 0 ;

            cin >> left >> right ;

            for ( int k = left - 1 ; k < right ; k ++ )
                sum += food [ k ] ;

            cout << sum << endl ;
        }
    }

    return 0 ;
}

/**
 *  此方法會導至TLE
 */
