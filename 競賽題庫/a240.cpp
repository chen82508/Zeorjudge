#include <iostream>

using namespace std ;

int main () {

	int m, n ;

	while ( cin >> m ) {

		int digit, current, sum ;

		for ( int i = 0 ; i < m ; i ++ ) {
			cin >> n ;
			digit = 1 ;
			sum = 0 ;

			for ( int j = 0 ; j < n ; j ++ ) {
                digit *= 10 ; current = digit / 17 ;
				sum += current ;
				digit = digit % 17 ;
			}

			cout << current << " " ;
			cout << sum << endl ;
		}
	}

	return 0 ;

}
