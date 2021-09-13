#include <iostream>

using namespace std ;

int main() {
    int n, y ;

    while ( cin >> n ) {
        for ( int i = 1 ; i <= n ; i ++ ) {
            cin >> y ;

            if ( y % 4 == 0 && y % 100 != 0 || y % 400 == 0 )
                cout << "Case " << i << ": a leap year" << endl ;
            else
                cout << "Case " << i << ": a normal year" << endl ;
        }
    }

    return 0 ;
}
