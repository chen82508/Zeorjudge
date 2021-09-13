#include <iostream>

using namespace std ;

int main () {

	string s ;

	while ( getline ( cin, s ) ) {

		string rev_s ;

		for ( int i = s.size() - 1 ; i >= 0 ; i -- ) rev_s += s[i] ;

		if ( rev_s == s ) cout << "yes" << endl ;

		else cout << "no" << endl ;

	}

	return 0 ;

}
