#include <iostream>

using namespace std ;

class TransposeMatrix {

    int Matrix [ 105 ] [ 105 ] ;

public :

    Transpose ( int Row, int Column ) {

        for ( int i = 0 ; i < Row ; i ++ )
            for ( int j = 0 ; j < Column ; j ++ )
                cin >> Matrix [ i ] [ j ] ;

        for ( int i = 0 ; i < Column ; i ++ ) {
            for ( int j = 0 ; j < Row ; j ++ ) {
                if ( j ) cout << ' ' ;

                cout << Matrix [ j ] [ i ] ;
            }
            cout << endl ;
        }
    }
};

int main () {
    int row, column ;

    while ( cin >> row >> column ) {
        TransposeMatrix pt = TransposeMatrix() ;
        pt.Transpose ( row, column ) ;
    }

    return 0 ;
}
