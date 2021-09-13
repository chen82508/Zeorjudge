#include <iostream>
#include <iomanip>

using namespace std ;

int main () {
    int Times, N, M, maximum ;

    cin >> Times ;

    while ( Times -- ) {
        cin >> N >> M ;

        maximum = N * N ;

        int x = 0, y = 0, dirX, dirY, dir ;
        int used [ 100 ] [ 100 ] = {} ;
        int i = 1, j ;

        if ( M == 1 )
            dirX = 0, dirY = 1, dir = 1 ;
        else
            dirX = 1, dirY = 0, dir = 2 ;

        do {
            used [ x ] [ y ] = i ;
            x += dirX, y += dirY ;

            if ( x < 0 || y < 0 || x >= N || y >= N || used [ x ] [ y ] ) {
                x -= dirX, y -= dirY ;

                // Clockwise
                //------------------------------------
                if ( M == 1 ) {
                    if ( dir == 1 )
                        dir ++, dirX = 1, dirY = 0 ;
                    else if ( dir == 2 )
                        dir ++, dirX = 0, dirY = -1 ;
                    else if ( dir == 3 )
                        dir ++, dirX = -1, dirY = 0 ;
                    else
                        dir = 1, dirX = 0, dirY = 1 ;
                }

                // Counterclockwise
                //------------------------------------
                else {
                    if ( dir == 1 )
                        dir = 4, dirX = -1, dirY = 0 ;
                    else if ( dir == 2 )
                        dir = 1, dirX = 0, dirY = 1 ;
                    else if ( dir == 3 )
                        dir = 2, dirX = 1, dirY = 0 ;
                    else
                        dir = 3, dirX = 0, dirY = -1 ;
                }

                x += dirX, y+= dirY ;
            }

            i ++ ;
        } while ( i <= maximum ) ;

        for ( int j = 0 ; j < N ; j ++ ) {
            for ( int k = 0 ; k < N ; k ++ )
                cout << setw ( 5 ) << used [ j ] [ k ] ;
            cout << endl ;
        }

        if ( Times )
            cout << endl ;
    }

    return 0 ;
}
