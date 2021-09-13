/**************************************************************
 *
 * Remember to plus 1, which is the first input's cycle-length.
 *
 **************************************************************/

#include <iostream>

using namespace std ;

int F ( int n ) {
    if ( n == 1 )
        return 1 ;
    else if ( n & 1 == 1 )
        return F ( 3 * n + 1 ) + 1 ;
    else
        return F ( n / 2 ) + 1 ;
}

int main () {
    int i, j ;

    while ( cin >> i >> j ) {
        int a = min ( i, j ) ;
        int b = max ( i, j ) ;

        int answer = 0 ;

        for ( int n = a ; n <= b ; n ++ )
            answer = max ( answer, F ( n ) ) ;

        cout << i << " " << j << " " << answer << endl ;
    }
}
