#include <iostream>

using namespace std ;

int solution ( int x ) {

	int count = 0 ;

	int cur_den = x ;
	while ( cur_den / 2 > 0 ) {
		count ++ ; cur_den /= 2 ;
	}

	cur_den = x ;
	while ( cur_den / 5 > 0 ) {
		count ++ ; cur_den /= 5 ;
	}

	return count + 1 ;

}

int main () {

	int m, n ;

	while ( cin >> m ) {

		for ( int i = 0 ; i < m ; i ++ ) {
			cin >> n ;
			int cnt_sum = 0 ;

			while ( n ) {
				cnt_sum += solution ( n ) ; n /= 10 ;
			}

			cout << cnt_sum - 1 << endl ;
		}
	}

	return 0 ;

}
