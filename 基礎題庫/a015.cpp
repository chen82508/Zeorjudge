#include <iostream>

using namespace std ;

int main () {

	int a[105][105] = { 0 } ;
	int row, column ;

	while ( cin >> row >> column ) {

		//input----------------------------------

		for ( int i = 0 ; i < row ; i ++ )

			for ( int j = 0 ; j < column ; j ++ )
				cin >> a[i][j] ;

		//output---------------------------------

		for ( int i = 0 ; i < column ; i ++ ) {

			for ( int j = 0 ; j < row ; j ++ ) {

				if ( j ) cout << ' ' ;

				cout << a[j][i] ;
			}

			cout << endl ;

		}

	}

	return 0 ;

}
