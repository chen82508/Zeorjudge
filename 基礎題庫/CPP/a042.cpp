#include <iostream>
#include <cmath>

using namespace std ;

int main () {

	int n ;

	while ( cin >> n )
		cout << pow ( n, 2 ) - n + 2 << endl ;

	return 0 ;

}
