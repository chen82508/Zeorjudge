#include <iostream>
#include <algorithm>
#define MAXN 10000 + 1

using namespace std ;

int main () {
    int N ;

    while ( cin >> N ) {
        int Arr[MAXN] = { 0 }, CNT = 0, temp = 0 ;

        for ( int i = 0 ; i < N ; i ++ ) cin >> Arr [ i ] ;

        for ( int i = N - 1 ; i > 0 ; i -- )
            for ( int j = 0 ; j < i ; j ++ )
                if ( Arr [ j ] > Arr [ j + 1 ] ) {
                    swap ( Arr [ j ], Arr [ j + 1 ] ) ;
                    CNT ++ ;
                }

        cout << CNT << endl ;
    }

    return 0 ;
}
