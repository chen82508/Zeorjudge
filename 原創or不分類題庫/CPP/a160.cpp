/******************************************************************************
 *
 * The purpose of using row index - column index + the number of Queens กั 2 - 1
 * to set value of slash is to prevent the repeat of the index of diagonal from
 * top left to bottom right which might result in judgment error.
 *
 * The judgment error means sometime it might put a queen on the position where
 * is the attack route of other queens.
 *
 ******************************************************************************/

#include <iostream>
#include <cmath>

void DFS ( int ) ;
bool onRoute ( int, int ) ;
void PrintResult ( int ) ;

int N, solution ;
bool Queens [ 30 ] [ 30 ], R_Diagonal [ 30 ], L_Diabonal [ 30 ] ;

using namespace std ;

int main () {
    while ( cin >> N ) {
        if ( N == 0 ) break ;

        solution = 0 ;
        DFS ( 0 ) ;

        cout << solution << "\n" ;
    }

    return 0 ;
}

// Index i is used to record the current row
//------------------------------------------------------------------------
void DFS ( int row ) {
    for ( int column = 0 ; column < N ; column ++ )

        // If there is no queen on the attack route, continue finding
        //------------------------------------------------------------------------
        if ( !onRoute ( row, column ) ) {
            int slash = ( row < column ) ? ( row - column + N * 2 ) : ( row - column ) ;

            if ( row == N - 1 ) {
                Queens [ row ] [ column ] = R_Diagonal [ row + column ] = L_Diabonal [ slash ] = 1 ;

                PrintResult ( N ) ;
                solution ++ ;

                Queens [ row ] [ column ] = R_Diagonal [ row + column ] = L_Diabonal [ slash ] = 0 ;
            }
            else {
                Queens [ row ] [ column ] = R_Diagonal [ row + column ] = L_Diabonal [ slash ] = 1 ;

                DFS ( row + 1 ) ;

                Queens [ row ] [ column ] = R_Diagonal [ row + column ] = L_Diabonal [ slash ] = 0 ;
            }
        }
}

// Judge if there is any other queen on the route of the queen which on the coordinate (i, j)
//------------------------------------------------------------------------
bool onRoute ( int i, int j ) {
    int slash = ( i < j ) ? ( i - j + N * 2 ) : ( i - j ) ;
    bool flag = false ;

    for ( int k = 0 ; k < N ; k ++ ) {
        if ( Queens [ i ] [ k ] || Queens [ k ] [ j ] || R_Diagonal [ i + j ] || L_Diabonal [ slash ] )
            flag = true ;

        if ( flag )
            break ;
    }

    return flag ;
}

void PrintResult ( int N ) {
    for ( int row = 0 ; row < N ; row ++ ) {
        for ( int column = 0 ; column < N ; column ++ )
            cout << ( Queens [ row ] [ column ] ? "Q" : "x" ) ;
        cout << "\n" ;
    }
    cout << "\n" ;
}
