#include <iostream>

using namespace std ;

int main () {

	int N ;

	while ( cin >> N ) {

		if ( N <= 10 ) cout << N * 6 << endl ;

		else if ( N > 10 && N <= 20 ) cout << 60 + ( N - 10 ) * 2 << endl ;

		else if ( N > 20 && N <= 40 ) cout << 80 + ( N - 20 ) << endl ;

		else cout << 100 << endl ;

	}

	return 0 ;

}
