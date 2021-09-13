#include <iostream>
#include <cmath>
#define ERROR 0.0000001

using namespace std ;

class ArmstrongNumber {

public :

    ComputeAN ( int N1, int N2 ) {
        bool print = 0 ;

        for ( int index = N1 ; index <= N2 ; index ++ ) {
            int cur_in = index, sum = 0, digit = 1 ;

            while ( cur_in /= 10 ) digit ++ ;

            cur_in = index ;

            while ( cur_in ) {
                sum += ( int ) ( pow ( ( double ) ( cur_in % 10 ), ( double )digit ) + ERROR ) ;
                cur_in /= 10 ;
            }

            if ( sum == index ) {
                if ( print ) cout << " " ;
                print = 1 ;
                cout << index ;
            }
        }
        if ( ! print ) cout << "none" ;

        cout << endl ;
    }
};

int main () {

	int LowerLimit, UpperLimit ;

	while ( cin >> LowerLimit >> UpperLimit ) {
        ArmstrongNumber res = ArmstrongNumber() ;
        res.ComputeAN ( LowerLimit, UpperLimit ) ;
	}

	return 0 ;
}
