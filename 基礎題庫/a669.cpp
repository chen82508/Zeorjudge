#include <iostream>

using namespace std ;

int main () {
    int Candys, Capacity ;

    while ( cin >> Candys >> Capacity ) {
        int Boxes = Candys / Capacity ;

        if ( Capacity == 1 ) cout << Boxes - 1 << endl ;
        else if ( Candys - ( Boxes * Capacity ) > 1 ) cout << Boxes + 1 << endl ;
        else cout << Boxes << endl ;
    }
}
