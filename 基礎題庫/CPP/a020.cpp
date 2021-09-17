#include <iostream>
#include <cstring>

using namespace std ;

int CheckID ( char letter ) {

	if ( letter >= 'A' && letter <= 'H' ) return (int)letter - (int)'A' + 10 ;

	if ( letter == 'I' ) return 34 ;

	if ( letter >= 'J' && letter <= 'N' ) return (int)letter - (int)'J' + 18 ;

	if ( letter == 'O' ) return 35 ;

	if ( letter >= 'P' && letter <= 'V' ) return (int)letter - (int)'P' + 23 ;

	if ( letter == 'W' ) return 32 ;

	if ( letter >= 'X' && letter <= 'Y' ) return (int)letter - (int)'X' + 30 ;

	if ( letter == 'Z' ) return 33 ;
}

int main () {

	char letter ;
	unsigned int IDnumber ;

	while ( cin >> letter >> IDnumber ) {

		int sum = 0, Head = CheckID ( letter ), current = 1 ;

		sum += Head / 10 ;
		sum += Head % 10 * 9 ;
		sum += IDnumber % 10 ;

		IDnumber /= 10 ;

		while ( IDnumber ) {

			sum += IDnumber % 10 * current ;
			current ++ ;
			IDnumber /= 10 ;
		}

		if ( sum % 10 == 0 ) cout << "real" << endl ;

		else cout << "fake" << endl ;

	}

	return 0 ;

}
