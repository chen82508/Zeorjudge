#include <iostream>
#include <cstring>

using namespace std ;

bool check ( int i, int sudoku[9][9] ) {

	int centerx = ( i % 3 ) * 3 + 1 ;
	int centery = ( i / 3 ) * 3 + 1 ;

	bool remember[10] = {0} ;

	for ( int iy = -1 ; iy <= 1 ; iy ++ )

		for ( int ix = -1 ; ix <= 1 ; ix ++)

			if ( remember[sudoku[centery + iy][centerx + ix]] ) return 1 ;
			else remember[sudoku[centery + iy][centerx + ix]] = 1 ;

	memset ( remember, 0, sizeof ( remember ) ) ;

	for ( int row = 0 ; row < 9 ; row ++ )

		if ( remember[sudoku[row][i]] ) return 1 ;
		else remember[sudoku[row][i]] = 1 ;

	memset ( remember, 0, sizeof ( remember ) ) ;

	for ( int column = 0 ; column < 9 ; column ++ )

		if ( remember[sudoku[i][column]] ) return 1 ;
		else remember[sudoku[i][column]] = 1 ;

	return 0 ;

}

int main () {

	while ( 1 ) {

		int sudoku[9][9] = { 0 } ;

		for ( int i = 0 ; i < 9 ; i ++ )
			for ( int j = 0 ; j < 9 ; j ++ )
				cin >> sudoku[i][j] ;

		if ( cin.eof() ) break ;

		bool answer = 0 ;

		for ( int i = 0 ; i < 9 ; i ++ )
			answer |= check ( i, sudoku );

		if ( answer ) cout << "no" << endl ;

		else cout << "yes" << endl;
	}

	return 0 ;

}
