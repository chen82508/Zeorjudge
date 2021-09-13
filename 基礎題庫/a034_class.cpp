#include <iostream>

using namespace std ;

class BinaryConversion{

public :

    ConvertFromDecimal ( int num ) {
        int binary [ 1000 ], bin_range = 0 ;

        while ( num ) {
            binary [ bin_range ++ ] = num % 2 ;
            num /= 2 ;
        }

        if ( bin_range ) {
            for ( int index = bin_range - 1 ; index >= 0 ; index -- )
                cout << binary [ index ] ;
            cout << endl ;
        }

        else cout << "0" << endl ;
    }
};

int main () {

	int n ;

	while ( cin >> n ) {
		BinaryConversion res = BinaryConversion();

		res.ConvertFromDecimal ( n ) ;
	}

	return 0 ;
}
