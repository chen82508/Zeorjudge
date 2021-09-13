#include <iostream>

using namespace std ;

int main () {
    int n ;

    while ( cin >> n ) {
        double a, b, c, d ;

        for ( int i = 0 ; i < n ; i ++ ) {
            cin >> a >> b >> c >> d ;

            if ( b == 0 && d == 0 ) {
                if ( a > c )
                    cout << ">" << endl ;
                else if ( a < c )
                    cout << "<" << endl ;
                else
                    cout << "=" << endl ;
            }
            else
                cout << "No" << endl ;
        }
    }

    return 0 ;
}
