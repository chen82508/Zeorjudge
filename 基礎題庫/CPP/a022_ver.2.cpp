#include <iostream>
#include <algorithm>

using namespace std ;

int main () {

	string s, r ;

	while ( getline ( cin, s ) ) {

		r = s ;
		reverse ( r.begin(), r.end() ) ;

		if ( r == s ) cout << "yes" << endl ;

		else cout << "no" << endl ;

	}

	return 0 ;

}
