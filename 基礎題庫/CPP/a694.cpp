#include <iostream>
#define max_n 500

using namespace std ;

int MAP [ max_n + 1 ] [ max_n + 1 ] ;
int temp [ max_n + 1 ] [ max_n + 1 ] ;

int main () {
    int n, m ;

    while ( cin >> n >> m ) {
        // Input the matrix
        //-------------------------------------
        for ( int i = 1 ; i <= n ; i ++ )
            for ( int j = 1 ; j <= n ; j ++ )
                cin >> MAP [ i ] [ j ] ;

        for ( int i = 0 ; i < m ; i ++ ) {
            int sum = 0 ;
            int x1, y1, x2, y2 ;

            // Input the range for eating
            //-------------------------------------
            cin >> x1 >> y1 >> x2 >> y2 ;

            // Control the range for eating
            //-------------------------------------
            for ( int j = x1 ; j <= x2 ; j ++ )
                for ( int k = y1 ; k <= y2 ; k ++ )
                    sum += MAP [ j ] [ k ] ;

            cout << sum << endl ;
        }
    }

    return 0 ;
}
