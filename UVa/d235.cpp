#include <bits/stdc++.h>

using namespace std ;

int main () {
    string N ;
    int Odd, Even ;

    while ( getline ( cin, N ) && N != "0" ) {
        Odd = 0, Even = 0 ;

        for ( int i = 0 ; i < N.length() ; i ++ ) {
            if ( i & 1 )
                Even += N [ i ] - '0' ;
            else
                Odd += N [ i ] - '0' ;
        }

        cout << N << " is" << ( ( Odd - Even ) % 11 ? " not " : " " ) << "a multiple of 11." << endl ;
    }

    return 0 ;
}
