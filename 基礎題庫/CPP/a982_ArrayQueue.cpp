#include <iostream>

using namespace std ;

const int MaxN = 100 ;
const int MaxQ = 200 ;

int main() {
    int n ;
    int x, y, intSteps ;
    // x = row index, y = column index

    string strMaze [ MaxN ] ;

    // QueueH record the number of steps
    // QueueY record the y-coordinate of the corresponding step in QueueH which has the same index
    // QueueX record the x-coordinate of the corresponding step in QueueH which has the same index
    int QueueH [ MaxQ ], QueueY [ MaxQ ], QueueX [ MaxQ ] ;
    int intRunTimes, intPopIndex ;

    while ( cin >> n ) {
        int intBoundary = n - 1 ;

        for ( int inputIndex = 0 ; inputIndex < n ; inputIndex ++ ) cin >> strMaze [ inputIndex ] ;

        intPopIndex = 0 ; intRunTimes = 0 ; intSteps = x = y = 1 ;
        //Push start point into queue

        strMaze [ y ] [ x ] = '#' ;
        // Set the visited block as '#'

        QueueH [ intRunTimes ] = intSteps ; QueueY [ intRunTimes ] = y ; QueueX [ intRunTimes ] = x ; intRunTimes = ( intRunTimes + 1 ) % MaxQ ;

        // Declare two direction arrays contain values { up, down, right, left }
        int dy[] = { -1, 1, 0, 0 } ;
        int dx[] = { 0, 0, -1, 1 } ;
        int ans = 0 ;

        while ( intRunTimes != intPopIndex && !ans ) {
            intSteps = QueueH [ intPopIndex ] ; y = QueueY [ intPopIndex ] ; x = QueueX [ intPopIndex ] ; intPopIndex = ( intPopIndex + 1 ) % MaxQ ;
            // Pop out the number of steps and the corresponding x-coordinate and y-coordinate from queues

            // Check the conditions of moving up, down, left, right on the current position
            for ( int d = 0 ; d < 4 ; ++ d ) {
                int ny = y + dy [ d ], nx = x + dx [ d ] ;

                // Check if it is the end or hits the border
                if ( ny < 1 || ny >= intBoundary || nx < 1 || nx >= intBoundary ) continue ;

                // Check if it has been visited
                if ( strMaze [ ny ] [ nx ] == '#' ) continue ;

                strMaze [ ny ] [ nx ] = '#' ;
                // Set the visited block as '#'

                // If the current position is on the left or up of the destination
                // Calculate the result immediately and end up the for-loop
                if ( ny == intBoundary - 1 && nx == intBoundary - 1 ) {
                    ans = intSteps + 1 ;
                    break ;
                }

                // Save the coordinate which is valid to visited in the queues
                QueueH [ intRunTimes ] = intSteps + 1 ; QueueY [ intRunTimes ] = ny ; QueueX [ intRunTimes ] = nx ; intRunTimes = ( intRunTimes + 1 ) % MaxQ ;
            }
        }

        if ( ans ) cout << ans << endl ;
        else cout << "No solution!" << endl ;
    }

    return 0 ;
}
