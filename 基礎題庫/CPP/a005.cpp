#include <iostream>

using namespace std ;

int main () {

	int t ;

	while ( cin >> t ) {

		for ( int i = 0 ; i < t ; i ++ ) {

			int array [ 5 ] = { 0 } ;

			for ( int j = 0 ; j <= 3 ; j ++ ) {
				cin >> array [ j ] ;
				cout << array [ j ] << " " ;
			}

			if ( array [ 1 ] - array [ 0 ] == array [ 2 ] - array [ 1 ] )
				cout << array [ 3 ] + array [ 1 ] - array [ 0 ] << endl ;

			else
				cout << array [ 3 ] * array [ 1 ] / array [ 0 ] << endl ;

		}
	}

	return 0 ;

}
