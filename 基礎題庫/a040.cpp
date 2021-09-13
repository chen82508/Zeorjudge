#include <iostream>
#include <cmath>
#define ERROR 0.0000001

using namespace std ;

int main () {
    int n, m ;

    while ( cin >> n >> m ) {
        bool print = 0 ;

        for ( int i = n ; i <= m ; i ++ ) {
            int temp = i, sum = 0, digit = 1 ;

            while ( temp /= 10 ) digit ++ ;

            temp = i ;

            while ( temp ) {
                sum += ( int ) ( pow ( ( double ) ( temp % 10 ), ( double ) digit ) + ERROR ) ;
                temp /= 10 ;
            }

            if ( sum == i ) {
                if ( print )
                    cout << " " ;
                print = 1 ;
                cout << i ;
            }
        }
        if ( ! print )
            cout << "none" ;
        cout << endl ;
    }

    return 0 ;
}
