#include <iostream>

using namespace std ;

int main() {
    int intTstCase ;

    cin >> intTstCase ;

    while ( intTstCase -- ) {
        int a1, a2, b1, b2, c1, c2 ;

        cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 ;

        int intDelta = a1 * b2 - a2 * b1 ;
        int intDeltaX = c1 * b2 - c2 * b1 ;
        int intDeltaY = a1 * c2 - a2 * c1 ;

        cout << intDeltaX / intDelta << " " << intDeltaY / intDelta << endl ;
    }

    return 0 ;
}
