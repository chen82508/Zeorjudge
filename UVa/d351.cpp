#include <iostream>

using namespace std ;

int main () {
    string s ;

    bool print = 0 ;

    while ( getline ( cin, s ) ) {
        if ( s [ 0 ] == '_' )
            if ( print )
                cout << '\n' ;

        else {
            int letter = 0 ;

            for ( int i = 0 ; i < s.length() ; i ++ ) {
                switch ( s [ i ] ) {

                case '.' :

                case '|' :
                    break ;

                case 'o' :
                    letter *= 2 ;
                    letter ++ ;
                    break ;

                case ' ' :
                    letter *= 2 ;
                    break ;
                }
            }

            cout << static_cast <char> ( letter ) ;
        }
    }

    return 0 ;
}
