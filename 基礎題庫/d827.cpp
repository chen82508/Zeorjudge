#include <iostream>

using namespace std ;

int main () {
    int n ;

    while ( cin >> n )
        cout << ( 50 * ( n / 12 ) ) + ( 5 * ( n % 12 ) ) << endl ;

    return 0 ;
}
