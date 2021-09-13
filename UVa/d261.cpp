#include <iostream>

using namespace std ;

int main () {
    unsigned int table [ 50 ] [ 2 ] = { 1 } ;

    // Construct the relational table
    //------------------------------------------
    for ( int i = 1 ; i < 50 ; i ++ ) {
        table [ i ] [ 0 ] = table [ i - 1 ] [ 1 ] + 1 ;
        table [ i ] [ 1 ] = table [ i - 1 ] [ 0 ] + table [ i - 1 ] [ 1 ] ;
    }

    int N ;

    while ( cin >> N && N != -1 )
        cout << table [ N ] [ 1 ] << " " << table [ N ] [ 0 ] + table [ N ] [ 1 ] << endl ;

    return 0 ;
}
