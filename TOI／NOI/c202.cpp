#include <iostream>

typedef long long int LLI ;

using namespace std ;

int main () {
    LLI n ;

    while ( cin >> n ) {
        LLI nums [ n ], tempFac ;

        for ( LLI i = 0 ; i < n ; i ++ )
            cin >> nums [ i ] ;

        for ( LLI i = 0 ; i < n -1 ; i ++ ) {

            // Calculate numbers in pairs by Euclidean algorithm
            //-------------------------------------------------------
            while ( ( nums [ i ] %= nums [ i + 1 ] ) && ( nums [ i + 1 ] %= nums [ i ] ) ) ;

            // Record the current result
            //-------------------------------------------------------
            tempFac = nums [ i ] + nums [ i + 1 ] ;

            // Use the current result to replace the first number of next pair
            //-------------------------------------------------------
            nums [ i + 1 ] = tempFac ;
        }

        cout << tempFac << endl ;
    }

    return 0 ;
}
