#include <iostream>

using namespace std ;

int main () {

    int times, Div ;

    while ( cin >> times ) {

        for ( int t = 0 ; t < times ; t ++ ) {
            cin >> Div ;
            int Sum = 0 ;

            for ( int i = 1 ; i < Div ; i ++ ) {
                if ( Div % i == 0 )
                    Sum += i;
            }

            if ( Sum == Div )
                cout << "perfect" << endl ;
            else if ( Sum < Div )
                cout << "deficient" << endl ;
            else if ( Sum > Div )
                cout << "abundant" << endl ;
        }

    }

    return 0 ;
}
