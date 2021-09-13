/****************************************************
 *
 * By the hint of this problem, we use long long int.
 *
 ****************************************************/

#include <iostream>

using namespace std ;

int main () {
    long long int N ;

    while ( cin >> N ) {
        // Find the last number of the row.
        //-------------------------------------------
        long long int lastNum = ( N * N + 2 * N - 1 ) >> 1 ;

        // Compute the summary of the last 3 numbers
        //-------------------------------------------
        cout << ( lastNum - 2 ) * 3 << endl ;
    }

    return 0 ;
}
