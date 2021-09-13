#include <iostream>
#include <cstring>

using namespace std ;

class SUDOKU {

public :

    bool Check ( int Index, int Sudoku [ 9 ] [ 9 ] ) {
        int centerX = ( Index % 3 ) * 3 + 1,
            centerY = ( Index / 3 ) * 3 + 1 ;

        bool remember [ 10 ] = { 0 } ;

        for ( int iY = -1 ; iY <= 1 ; iY ++ )
            for ( int iX = -1 ; iX <= 1 ; iX ++ )
                if ( remember [ Sudoku [ centerY + iY ] [ centerX + iX ] ] ) return 1 ;

                else remember [ Sudoku [ centerY + iY ] [ centerX + iX ] ] = 1 ;

        memset ( remember, 0, sizeof ( remember ) ) ;

        for ( int row = 0 ; row < 9 ; row ++ )
            if ( remember [ Sudoku [ row ] [ Index ] ] ) return 1 ;

            else remember [ Sudoku [ row ] [ Index ] ] = 1 ;

        memset ( remember, 0, sizeof ( remember ) ) ;

        for ( int column = 0 ; column < 9 ; column ++ )
            if ( remember [ Sudoku [ Index ] [ column ] ] ) return 1 ;

            else remember [ Sudoku [ Index ] [ column ] ] = 1 ;

        return 0 ;
    }
};

int main () {

    while ( 1 ) {
        int sdk [ 9 ] [ 9 ] = { 0 } ;

        for ( int i = 0 ; i < 9 ; i ++ )
            for ( int j = 0 ; j < 9 ; j ++ )
                cin >> sdk [ i ] [ j ] ;

        if ( cin.eof() ) break ;

        bool answer = 0 ;

        SUDOKU check = SUDOKU() ;

        for ( int i = 0 ; i < 9 ; i ++ )
            answer |= check.Check ( i, sdk ) ;

        if ( answer ) cout << "no" << endl ;

        else cout << "yes" << endl ;
    }

    return 0 ;
}
