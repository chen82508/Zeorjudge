#include <iostream>

using namespace std ;

int main () {
    long long int n ;

    while ( cin >> n ) {
        long long int c [ n ] ;

        for ( long long int i = 0 ; i < n ; i ++ )
            cin >> c [ i ] ;

        long long int maximum = c [ 0 ] ;

        for ( long long int i = 1 ; i < n ; i ++ )
            maximum = max ( maximum, c [ i ] ) ;

        cout << maximum << endl ;
    }

    return 0 ;
}
