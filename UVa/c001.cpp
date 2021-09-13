#include <bits/stdc++.h>

using namespace std ;

int main() {
    string str1, str2 ;
    int iLCS [ 1005 ] ;

    while ( getline ( cin, str1 ) ) {
        getline ( cin, str2 ) ;
        memset ( iLCS, 0, sizeof ( iLCS ) ) ;

        for ( int i = 1 ; i <= str1.length() ; i ++ ) {
            for ( int j = str2.length() ; j >= 1 ; j -- )
                if ( str1 [ i - 1 ] == str2 [ j - 1 ] ) iLCS [ j ] = iLCS [ j - 1 ] + 1 ;

            for ( int j = 1 ; j <= str2.length() ; j ++ )
                if ( str1 [ i - 1 ] != str2 [ j - 1 ] ) iLCS [ j ] = max ( iLCS [ j ], iLCS [ j - 1 ] ) ;
        }

        cout << iLCS [ str2.length() ] << endl ;
    }

    return 0 ;
}
