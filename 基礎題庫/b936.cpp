/*********************************************************************************
 *
 * Use scanf & printf instead of cin & cout to prevent the TLE (Time limit exceed)
 *
 *********************************************************************************/

#include <bits/stdc++.h>

using namespace std ;

long long int lliPiece, lliHasEaten;

long long int DFS_Divide ( long long int lliToDivide ) {
    if ( lliToDivide / 2 < lliHasEaten ) return 1 ;

    return lliToDivide & 1 ? DFS_Divide ( ( lliToDivide + 1 ) / 2 ) + DFS_Divide ( ( lliToDivide - 1 ) / 2 ) : 2 * DFS_Divide ( lliToDivide / 2 ) ;
}

int main () {
    while ( scanf ( "%lld %lld", &lliPiece, &lliHasEaten ) == 2 ) {
        if ( lliPiece < lliHasEaten ) printf ( "0\n" ) ;
        else printf ( "%lld\n", DFS_Divide ( lliPiece ) ) ;
    }

    return 0 ;
}
