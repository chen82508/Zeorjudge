/************************************************************
 *
 * Reference web :
 *      https://prprprpony.github.io/blog/2016/06/14/zj-b537/
 *
 ************************************************************/

#include <iostream>

typedef unsigned long long int ULLI ;

using namespace std ;

ULLI Solution ( ULLI, ULLI ) ;

int main () {
    ULLI a, b ;

    while ( cin >> a >> b )
        cout << Solution ( a, b ) << endl ;

    return 0 ;
}

ULLI Solution ( ULLI a, ULLI b ) {
    if ( a > b )
        return ( a % b ) ? ( 1 + Solution ( b, a % b ) ) << ( a / b ) : 1LL << ( a / b - 1 ) ;

    else if ( a < b )
        return 1 + Solution ( b, a ) ;

    else
        return 1 ;
}
