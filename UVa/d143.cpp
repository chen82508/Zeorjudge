#include <iostream>

using namespace std ;

int main () {
    int team ;

    while ( cin >> team ) {
        int a, b ;

        for ( int i = 0 ; i < team ; i ++ ) {
            cin >> a >> b ;

            if ( a < b )
                cout << "<" << endl ;
            else if ( a > b )
                cout << ">" << endl ;
            else
                cout << "=" << endl ;
        }
    }

    return 0 ;
}
