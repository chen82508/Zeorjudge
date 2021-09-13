#include <bits/stdc++.h>

using namespace std ;

int main () {
    long long N ;

    while ( cin >> N ) {
        if ( N < 0 )
            break ;

        cout << ( N * N + N + 2 >> 1 ) << endl ;
    }

    return 0 ;
}
