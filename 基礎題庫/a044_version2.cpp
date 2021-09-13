#include <iostream>
#include <cmath>

using namespace std ;

int main () {
    int n ;

    while ( cin >> n )
        cout << ( pow ( n, 3 ) + 5 * n + 6 ) / 6 << endl ;

    return 0 ;
}
