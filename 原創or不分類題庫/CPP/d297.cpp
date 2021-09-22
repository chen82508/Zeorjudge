/**************************************************************
 *
 * Reference web :
 *      https://home.gamer.com.tw/creationDetail.php?sn=3002278
 *
 **************************************************************/
#include <iostream>
#include <cstring>

using namespace std ;

int main () {
    int n ;

    while ( cin >> n ) {
        // Use sum to compute the arithmetic series
        // Use a to store the answer what we need
        //------------------------------------------
        int sum [ n ] ;
        int a [ 2 * n + 1 ] ;

        // Initialize the two arrays' value to 0
        //------------------------------------------
        memset ( sum, 0, sizeof ( sum ) ) ;
        memset ( a, 0, sizeof ( a ) ) ;

        sum [ 0 ] = 0 ;

        // Compute the arithmetic series
        //------------------------------------------
        for ( int i = 1 ; i <= n ; i ++ )
            sum [ i ] = sum [ i - 1 ] + i ;

        // Compute the sum of regular triangles
        //that is vertex up
        //------------------------------------------
        for ( int i = 1 ; i <= n ; i ++ )
            a [ i ] = sum [ n - i + 1 ] ;

        long long int s = 0 ;

        for ( int i = 1 ; i <= n ; i ++ ) {
            // Compute the sum of regular triangles
            //that is vertex down
            //------------------------------------------
            a [ i ] = a [ i ] + a [ i * 2 ] ;

            // The sum
            //------------------------------------------
            s = s + a [ i ] ;
        }

        cout << s << endl ;
    }

    return 0 ;
}
