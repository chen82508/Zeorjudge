#include <iostream>
#include <cmath>

using namespace std ;

int main () {
    int n ;

    while ( cin >> n && n != 0 ) {
        int limit = static_cast <int> ( sqrt ( n ) ) ;
        int output = n ;
        int factor = 0 ;

        for ( int i = 2 ; i <= limit ; i ++ ) {
            if ( n % i == 0 )
                factor ++ ;

            while ( n % i == 0 )
                    n /= i ;
        }

        // If the last quotient is not 1, means there is a left quality factor
        //---------------------------------------------------------------------
        if ( n != 1 )
            factor ++ ;

        cout << output << " : " << factor << endl ;
    }

    return 0 ;
}
