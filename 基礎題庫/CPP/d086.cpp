#include <iostream>

using namespace std ;

int main () {
    string s ;

    while ( cin >> s ) {
        if ( s [ 0 ] == '0' && s [ 1 ] == '\0' )
            break ;

        int sum = 0 ;

        for ( int i = 0 ; i < s.length() ; i ++ ) {
            if ( s [ i ] >= 'A' && s [ i ] <= 'Z' )
                sum += s [ i ] - 64 ;
            else if ( s [ i ] >= 'a' && s [ i ] <= 'z' )
                sum += s [ i ] - 96 ;
            else {
                sum = -1 ;
                break ;
            }
        }

        if ( sum == -1 )
            cout << "Fail" << endl ;
        else
            cout << sum << endl ;
    }

    return 0 ;
}
