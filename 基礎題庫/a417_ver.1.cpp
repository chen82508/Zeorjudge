#include <iostream>
#include <cstring>
#include <iomanip>
#define MAX 100

using namespace std ;

// Ron record the result, Map record the route
// We need to build the walls on up, down, left, right sides
// So plus 2 to MAX
//============================================================
int Ron [ MAX + 2 ] [ MAX + 2 ] ;
int Map [ MAX + 2 ] [ MAX + 2 ] ;

int ClockWise ( int, int, int ) ;
int CounterClockWise ( int, int, int ) ;

// t is the number to fill in every time
//============================================================
int t ;

int main () {
    int n, q ;

    cin >> q ;

    while ( q -- ) {
        int r ;

        cin >> n >> r ;

        // Initial two arrays' values
        //-----------------------------------------------------
        memset ( Ron, -1, sizeof ( Ron ) ) ;
        memset ( Map, -1, sizeof ( Ron ) ) ;

        // Initial the coordinates which will be dealt with
        //-----------------------------------------------------
        for ( int i = 1 ; i <= n ; i ++ ) {
            for ( int j = 1 ; j <= n ; j ++ ) {
                Ron [ i ] [ j ] = 0 ;
                Map [ i ] [ j ] = 0 ;
            }
        }

        // t start in 1 every time
        //-----------------------------------------------------
        t = 1 ;

        // j and k are the initial value of coordinate
        //-----------------------------------------------------
        int j = 1, k = 1 ;

        // Decide the direction
        //-----------------------------------------------------
        if ( r == 1 )
            ClockWise ( n, k, j ) ;
        else
            CounterClockWise ( n, k, j ) ;

        // Fill the last coordinate with n^2
        //-----------------------------------------------------
        for ( int i = 1 ; i <= n ; i ++ )
            for ( int j = 1 ; j <= n ; j ++ )
                if ( Ron [ i ] [ j ] == 0 )
                    Ron [ i ] [ j ] = t ;

        // Output
        //-----------------------------------------------------
        for ( int i = 1 ; i <= n ; i ++ ) {
            for ( int j = 1 ; j <= n ; j ++ )
                cout << setw ( 5 ) << Ron [ i ] [ j ] ;

            cout << endl ;
        }
    }

    return 0 ;
}

int ClockWise ( int n, int k, int j ) {

    while ( t < n * n ) {
        // Move to the right
        //-----------------------------------------------------
        while ( Map [ k ] [ j + 1 ] != -1 ) {
            Ron [ k ] [ j ] = t ;
            Map [ k ] [ j ] = -1 ;

            t ++ ;
            j ++ ;
        }

        // Move down
        //-----------------------------------------------------
        while ( Map [ k + 1 ] [ j ] != -1 ) {
            Ron [ k ] [ j ] = t ;
            Map [ k ] [ j ] = -1 ;

            t ++ ;
            k ++ ;
        }

        // Move to the left
        //-----------------------------------------------------
        while ( Map [ k ] [ j - 1 ] != -1 ) {
            Ron [ k ] [ j ] = t ;
            Map [ k ] [ j ] = -1 ;

            t ++ ;
            j -- ;
        }

        // Move up
        //-----------------------------------------------------
        while ( Map [ k - 1 ] [ j ] != -1 ) {
            Ron [ k ] [ j ] = t ;
            Map [ k ] [ j ] = -1 ;

            t ++ ;
            k -- ;
        }
    }
}

int CounterClockWise ( int n, int k, int j ) {
    while ( t < n * n ) {
        // Move down
        //-----------------------------------------------------
        while ( Map [ k + 1 ] [ j ] != -1 ) {
            Ron [ k ] [ j ] = t ;
            Map [ k ] [ j ] = -1 ;

            t ++ ;
            k ++ ;
        }

        // Move to the right
        //-----------------------------------------------------
        while ( Map [ k ] [ j + 1 ] != -1 ) {
            Ron [ k ] [ j ] = t ;
            Map [ k ] [ j ] = -1 ;

            t ++ ;
            j ++ ;
        }

        // Move up
        //-----------------------------------------------------
        while ( Map [ k - 1 ] [ j ] != -1 ) {
            Ron [ k ] [ j ] = t ;
            Map [ k ] [ j ] = -1 ;

            t ++ ;
            k -- ;
        }

        // Move to the left
        //-----------------------------------------------------
        while ( Map [ k ] [ j - 1 ] != -1 ) {
            Ron [ k ] [ j ] = t ;
            Map [ k ] [ j ] = -1 ;

            t ++ ;
            j -- ;
        }
    }
}
