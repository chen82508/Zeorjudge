#include<iostream>

using namespace std ;

bool CheckIsReal ( int thesum, int thei ) {
	int v [] = { 10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33}, temp = 0 ;

	thesum += v [thei] / 10 ;
	thesum += (v [thei] % 10) *9 ;

	if ( thesum % 10 == 0 )
        return 1 ;

	else
		return 0 ;
}

int main () {
    string ID ;

    while ( cin >> ID ) {

        int sum = 0 ;

        for ( int i = 0, mult = 8 ; mult >= 1 ; i ++, mult -- )
            sum += ( ( ID [i] - ( int ) '0' ) * mult ) ;

        sum += ( ID [8] - '0' ) ;       // The number of the last digit

        for ( int i = 0 ; i <= 25 ; i ++ )
            if ( CheckIsReal ( sum, i ))
                cout << ( char ) ( i + 'A' ) ;

        cout << endl ;
    }

    return 0 ;
}
