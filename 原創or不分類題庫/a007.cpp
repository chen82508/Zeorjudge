#include <iostream>
#include <cmath>

using namespace std ;

int main () {

	int input[200000], input_count = 0, max = 0 ;

	while ( cin >> input[input_count] ){

		if ( max < input[input_count] ) max = input[input_count] ;
		input_count ++ ;
	}

	int i, max_sqrt = ((int)ceil(sqrt(max))), table[max_sqrt], table_count = 0 ;

	table[table_count++] = 2 ;

	for ( i = 3 ; i <= max_sqrt ; i += 2 ){

		int j, flag = 0 ;

		for ( j = 0 ; j < table_count ; j ++ ){

			if ( i % table[j] == 0 ){
				flag = 1 ; break ;
			}

		}
		if ( !flag )
			table[table_count++] = i ;
	}

	for ( i = 0 ; i < input_count ; i ++ ){

		int j, flag = 0 ;

		for ( j = 0 ; j < table_count && input[i] > table[j] ; j ++ ){

			if ( input[i] % table[j] == 0 ){
				flag = 1 ; break ;
			}
		}

		if ( flag ) cout << "非質數" << endl ;

		else cout << "質數" << endl ;
	}

	return 0 ;

}
