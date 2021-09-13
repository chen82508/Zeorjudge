#include <iostream>

using namespace std ;

int main () {

	int num ;

	while( cin >> num ) {

		int num_rev = 0 ;

		while ( num ) {

			num_rev *= 10 ;
			num_rev += num % 10 ;
			num /= 10 ;

		}
		cout << num_rev << endl;
	}
	return 0;
}
