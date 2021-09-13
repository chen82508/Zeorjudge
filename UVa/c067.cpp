/******************************************************************************
 *
 * Find the average, that is the numbers of brick while end moving, at first.
 * Compute the difference of the average and the number that less than average.
 * (You can also Compute the average and the number that larger than average.)
 * Add each difference, and you will know how many times to move the bricks
 *
 ******************************************************************************/

#include <iostream>

using namespace std ;

int main () {
    int n, SetNum = 0 ;

    while ( cin >> n && n != 0 ) {
        int h [ n ], average = 0 ;
        SetNum ++ ;

        for ( int i = 0 ; i < n ; i ++ ) {
            cin >> h [ i ] ;
            average += h [ i ] ;
        }

        int moveTimes = 0 ; average = average / n ;

        for ( int i = 0 ; i < n ; i ++ )
            if ( h [ i ] < average )
                moveTimes += ( average - h [ i ] ) ;

        cout << "Set #" << SetNum << endl ;
        cout << "The minimum number of moves is " << moveTimes << "." << endl ;
        cout << endl ;
    }

    return 0 ;
}
