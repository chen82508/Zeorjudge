/******************************
 *
 * This is the intuitive coding
 *
 ******************************/

#include <iostream>
#include <cstdio>

using namespace std ;

int main () {
    int a, b, ansLine, ans [ 4 ], input [ 4 ], check [ 4 ] ;

    while ( scanf ( "%d %d %d %d", &ans [ 0 ], &ans [ 1 ], &ans [ 2 ], &ans [ 3 ] ) == 4 ) {
        cin >> ansLine ;

        while ( ansLine -- ) {
            a = b = 0 ;

            for ( int i = 0 ; i < 4 ; i ++ ){
                cin >> input [ i ] ;

                if ( ans [ i ] == input [ i ] )
                    a ++, check [ i ]  = 1 ;
                else
                    check [ i ] = 0 ;
            }

            for ( int i = 0 ; i < 4 ; i ++ )
                if ( check [ i ] != 1 )
                    for ( int j = 0 ; j < 4 ; j ++ )
                        if ( check [ j ] == 0 && ( input [ i ] == ans [ j ] ) && j != i ) {
                            b ++, check [ j ] = 2 ;
                            break ;
                        }

            cout << a << "A" << b << "B" << endl ;
        }
    }

    return 0 ;
}
