#include <iostream>

using namespace std ;

int main () {
    long long N ;

    while ( cin >> N ) {
        if ( N == 0 )
            break ;

        cout << ( N * ( N + 1 ) * ( 2 * N + 1 ) ) / 6 << endl ;
    }

    return 0 ;
}
