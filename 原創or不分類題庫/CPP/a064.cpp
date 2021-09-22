/****************************************************************************
 *
 * Turning " ( ( a x b + c ) / d ) - e = f "
 * into " a x b + c = d x ( e + f ) " is more easy to understand this problem
 *
 ****************************************************************************/

#include <bits/stdc++.h>
#define move 60000

using namespace std ;

main () {
    int N, S [ 100 ], i, j, k, l ;

    while ( scanf ( "%d", &N ) == 1 ) {
        for ( i = 0 ; i < N ; i ++ )
            cin >> S[i] ;

        int ef [ 120001 ] = {} ;

        long long A = 0 ;

        for ( i = 0 ; i < N ; i ++ )
            for ( j = 0 ; j < N ; j ++ )
                ef [ ( S [ i ] + S [ j ] + move ) ] ++ ;

        for ( i = 0 ; i < N ; i ++ ) {
            for ( j = i + 1 ; j < N ; j ++ )
                for ( l = 0 ; l < N ; l ++ )
                    for ( k = 0 ; k < N ; k ++ ) {
                        if ( S [ k ] != 0 &&
                            ( S [ i ] * S [ j ] + S [ l ]) % S [ k ] == 0 &&
                            abs ( ( S [ i ] * S [ j ] + S [ l ] ) / S [ k ] ) < 60000 )
                        A += 2 * ef [ ( S [ i ] * S [ j ] + S [ l ] ) / S [ k ] + move ] ;
                    }
            j = i ;
                for ( l = 0 ; l < N ; l ++ )
                    for ( k = 0 ; k < N ; k ++ ) {
                        if ( S [ k ] != 0 &&
                            ( S [ i ] * S [ j ] + S [ l ] ) % S [ k ] == 0 &&
                            abs ( ( S [ i ] * S [ j ] + S [ l ] ) / S [ k ] ) < 60000 )
                        A += ef [ ( S [ i ] * S [ j ] + S [ l ] ) / S [ k ] + move ] ;
                    }
        }

        cout << A << endl ;
    }

    return 0 ;
}
