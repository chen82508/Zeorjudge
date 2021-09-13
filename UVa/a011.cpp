#include <iostream>
#include <cctype>

using namespace std ;

int main () {

	string s ;

	while ( getline ( cin , s ) ) {

		int num = 0 ; bool word = 0 ;

		for ( int i = 0 ; i < s.length() ; i ++ ){

			if ( isalpha ( s[i] ) ){

				if ( ! word ){
					word = 1 ; num ++ ;
				}
			}

			else word = 0 ;
		}

		cout << num << endl ;
	}

	return 0 ;

}
