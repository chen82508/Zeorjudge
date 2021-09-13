#include <iostream>
#include <cmath>

using namespace std ;

int main () {

	int side1, side2, side3 ;

	while ( cin >> side1 >> side2 >> side3 ) {

		if ( pow ( side1, 2 ) + pow ( side2, 2 ) == pow ( side3, 2 ) ||
			pow ( side2, 2 ) + pow ( side3, 2 ) == pow ( side1, 2 ) ||
			pow ( side3, 2 ) + pow ( side1, 2 ) == pow ( side2, 2 ) )
			cout << "right triangle" << endl ;

		else if ( pow ( side1, 2 ) + pow ( side2, 2 ) > pow ( side3, 2 ) &&
				pow ( side2, 2 ) + pow ( side3, 2 ) > pow ( side1, 2 ) &&
				pow ( side3, 2 ) + pow ( side1, 2 ) > pow ( side2, 2 ) )
			cout << "acute triangle" << endl ;

		else cout << "obtuse triangle" << endl ;
	}

	return 0 ;

}
