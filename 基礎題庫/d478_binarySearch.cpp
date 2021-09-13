/*****************************
 *
 * 二分搜尋法 (Binary Search)
 *
 *****************************/

#include <iostream>

using namespace std ;

int main () {
    int n, m ;

    while ( cin >> n >> m ) {

        while ( n -- ) {
            int a [ 10000 ] = { 0 } ;

            for ( int i = 0 ; i < m ; i ++ )
                cin >> a [ i ] ;

            int b [ 10000 ] = { 0 } ;

            for ( int i = 0 ; i < m ; i ++ )
                cin >> b [ i ] ;

            // The following is binary search method
            //--------------------------------------
            int mid, sum = 0 ;

            for ( int i = 0 ; i < m ; i ++ ) {
                int leftIdx = 0, rightIdx = m - 1 ;

                // When leftIdx = rightIdx
                //means the left boundary or the right boundary
                //--------------------------------------
                while ( leftIdx <= rightIdx ) {
                    mid = ( leftIdx + rightIdx ) >> 1 ;

                    // Median is smaller than the searching value
                    //means search the right side
                    //change leftIdx th narrow down the interval
                    //--------------------------------------
                    if ( a [ mid ] < b [ i ] )
                        leftIdx = mid + 1 ;

                    // Median is bigger than the searching value
                    //means search the left side
                    //change rightIdx th narrow down the interval
                    //--------------------------------------
                    else if ( a [ mid ] > b [ i ] )
                        rightIdx = mid - 1 ;

                    // Median is equal to the searching value
                    //--------------------------------------
                    else if ( a [ mid ] == b [ i ] ) {
                        sum ++ ;
                        break ;
                    }
                }
            }

            cout << sum << endl ;
        }
    }

    return 0 ;
}
