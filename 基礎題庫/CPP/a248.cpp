#include <iostream>

using namespace std ;

int main () {
	long long int a, b ;
	int N ;

	while ( cin >> a >> b >> N ) {
		cout << a / b << ".";
		a %= b ;

		for ( int i = 0 ; i < N ; i ++ ) {
			a *= 10 ;
			cout << a / b ;
			a %= b ;
		}

		cout << endl ;
	}

	return 0 ;
}
