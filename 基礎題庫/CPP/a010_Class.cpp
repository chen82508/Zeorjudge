#include <iostream>
#include <cmath>

using namespace std;

//宣告Factor decomposition用物件
class FctDcp {

public :

    Dcp ( int Div ) {
        bool print = 0 ;
        int degree, limit = static_cast< int >( sqrt( Div ) ) ;

        for ( int i = 0 ; i <= limit ; i ++ ) {
            degree = 0 ;

            while ( Div % i == 0 ) {
                degree ++ ;
                Div /= i ;
            }

            if ( degree )
                if ( print ) {
                    cout << " * " << i ;

                    if ( degree != 1 )
                        cout << "^" << degree ;
                }

                else {
                    print = 1 ;
                    cout << i ;

                    if ( degree != 1 )
                        cout << "^" << degree ;
                }
        }
        if ( Div != 1 )
            if ( print )
                cout << " * " << Div ;

            else
                cout << Div ;
        cout << endl ;
    }
};

int main () {

	int x ;

	while ( cin >> x ) {
	    FctDcp pt = FctDcp() ;
	    pt.Dcp( x ) ;
	}
	return 0 ;
}
