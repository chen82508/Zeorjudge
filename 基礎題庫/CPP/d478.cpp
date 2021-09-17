#include <bits/stdc++.h>
#define maxn 10000 + 1

using namespace std ;

int a [ 10001 ], b [ 10001 ] ;

int main () {
    int n, m ;

    while ( cin >> n >> m ) {
        while ( n -- ) {
            int ans = 0 ;

            for ( int i = 0 ; i < m ; i ++ )
                cin >> a [ i ] ;

            for ( int i = 0 ; i < m ; i ++ )
                cin >> b [ i ] ;

            int i = 0, j = 0 ;

            while ( i < m && j < m ) {
                if ( a [ i ] == b [ j ] ) {
                    ans ++ ;
                    i ++ ;
                    j ++ ;
                }

                else if ( a [ i ] > b [ j ] )
                    j ++ ;

                else
                    i ++ ;
            }

            cout << ans << endl ;
        }
    }

    return 0 ;
}
