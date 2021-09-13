#include <iostream>

using namespace std ;

int main () {
    int w ;

    while ( cin >> w )
        cout << ( w > 50 ? w - 1 : w ) << endl ;

    return 0 ;
}
