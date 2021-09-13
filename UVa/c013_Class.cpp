#include <iostream>

using namespace std ;

class PrintTriangle{

	public :

		PrintTri ( int layers, int frequency ) {

			for ( int l = 0 ; l < frequency ; l ++ ) {
				for ( int j = 1 ; j <= layers ; j ++ ) {

					for ( int k = 1 ; k <= j ; k ++ )
						cout << j ;
					cout << endl ;
				}

				for ( int j = layers - 1 ; j > 0 ; j -- ) {

					for ( int k = j ; k > 0 ; k -- )
						cout << j ;
					cout << endl ;
				}
			cout << endl ;
			}
		}
};

int main () {

	int Runtimes, b, c ;
	while ( cin >> Runtimes ) {

		for ( int i = 0 ; i < Runtimes ; i ++ ){
			cin >> b >> c ;
			PrintTriangle pt = PrintTriangle() ;
			pt.PrintTri( b, c) ;
		}
	}

	return 0 ;

}
