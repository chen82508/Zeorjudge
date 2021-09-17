#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int x ;

	while ( cin >> x ) {

		bool print = 0 ;
		int num ;
		int limit = static_cast < int > ( sqrt ( x ) ) ;

		for ( int i = 2 ; i <= limit ; i++ ){

			num = 0 ;
			while ( x % i == 0 ) {
				num ++ ;
				x /= i ;
			}

			if ( num )

				if ( print ) {
					cout << " * " << i ;

					if ( num != 1 )
						cout << "^" << num ;
				}

				else {
					print = 1 ;
					cout << i ;

					if ( num != 1 )
						cout << "^" << num ;
				}
		}
		if ( x != 1 )
			if ( print )
				cout << " * " << x ;

			else
				cout << x ;
		cout << endl ;
	}
	return 0 ;
}
