#include <iostream>

using namespace std ;

int main() {
    int n, y ;

    while ( cin >> n ) {
        while ( n ) {
            cin >> y ;
            if ( y % 4 == 0 && y % 100 != 0 || y % 400 == 0 )
                cout << "a leap year" << endl ;
            else
                cout << "a normal year" << endl ;

            n -- ;
        }
    }

    return 0 ;
}
