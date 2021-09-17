#include <iostream>

using namespace std ;

int main () {
    int TestCase ;

    cin >> TestCase ;

    while ( TestCase -- ) {
        int N, side [ 100 ], cnt = 0 ;

        cin >> N ;

        for ( int i = 0 ; i < N ; i ++ )
            cin >> side [ i ] ;

        for ( int i = 0 ; i < N ; i ++ )
            for ( int j = 0 ; j < N ; j ++ )
                for ( int k = 0 ; k < N ; k ++ )
                    cnt += side [ i ] * side [ i ] + side [ j ] * side [ j ] == side [ k ] * side [ k ] ;

        cout << ( cnt >> 1 ) << endl ;
    }

    return 0 ;
}
