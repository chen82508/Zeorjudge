/*********************************************************************
 *
 * Use sieve of Eratosthenes to construct the table of primes at first
 *
 *********************************************************************/

#include <iostream>
#include <cstdio>
#include <vector>

using namespace std ;

typedef long long ll ;
bool P [ 20000000 ] ;
vector<int> p ;

int main () {
    fill ( P, P + 20000000, true ) ;

    for ( int i = 2 ; i < 20000000 ; i ++ ) {
        if ( P [ i ] ) {
            p.push_back ( i ) ;
            for ( ll j = ( ll ) i * i ; j < 20000000 ; P [ j ] = false, j += i ) ;
        }
    }

    int x ; ll sum ;

    while ( cin >> x ) {
        sum = 0 ;

        for ( int pi = 0, pn = p.size() ; pi < pn ; pi ++ ){
            while ( x % p [ pi ] == 0 ) x /= p [ pi ], sum += p [ pi ] ;
            if ( x == 1 ) break ;
        }

        if ( x == 1 ) cout << sum << endl ;
        else cout << sum + x << endl ;
    }

    return 0 ;
}
