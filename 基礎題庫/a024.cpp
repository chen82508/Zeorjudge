#include <iostream>

using namespace std ;

int main () {
	int num1, num2 ;

	while ( cin >> num1 >> num2 ) {

		while ( ( num1 %= num2 ) && ( num2 %= num1 ) ) ;
		cout << num1 + num2 << endl ;
	}

	return 0 ;
}
