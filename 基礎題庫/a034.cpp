#include <iostream>

using namespace std ;

int main () {

	int n ;

	while ( cin >> n ) {

		int binary[1000], bin_range = 0 ;

		while ( n ) {
			binary[bin_range ++ ] = n % 2 ;
			n /= 2 ;
		}

		if ( bin_range ) {

			for ( int i = bin_range - 1 ; i >= 0 ; i -- )
				cout << binary[i] ;
			cout << endl ;

		}

		else cout << "0" << endl ;
	}

	return 0 ;

}
