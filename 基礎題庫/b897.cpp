/****************************************************
 *
 * The Stirling formula is n! ≈ (2nπ)^(1/2) * (n/e)^n
 *
 ****************************************************/


#include <cstdio>
#include <cmath>

typedef unsigned int UI ;

long double digit ( UI n ) {

    // Use Stirling formula
	return ( log10 ( 2.0 * acos ( -1.0 ) * n ) / 2 + n * log10 ( n + 0.0 ) - n ) ;
}

int main () {
	UI n, k ;
	while ( scanf( "%d %d", &n, &k ) != EOF )
        printf( "%d\n", ( UI ) ( digit ( n ) - digit ( k ) - digit ( n - k ) ) + 1 ) ;

    return 0 ;
}
