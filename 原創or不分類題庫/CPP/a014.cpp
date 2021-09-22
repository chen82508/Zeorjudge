/**************************************
 *
 * Use memset function to initial array
 *
 **************************************/

#include <iostream>
#include <cstring>

using namespace std ;

const int maxn = 130001 ;
int l [ maxn ], r [ maxn ] ;

int main () {

	int N, Y ;

	while ( cin >> N >> Y ) {

		//input
		//-----------------------------------
        memset ( l, 0, sizeof ( l ) ) ;
		memset ( r, 0, sizeof ( r ) ) ;

		for ( int i = 0, sl, sr ; i < N ; i ++ ) {

			cin >> sl >> sr ;
			if ( sr - sl > Y ) continue ;

			l [ sl ] ++ ;
			r [ sr ] ++ ;

		}
		//solve
		//-----------------------------------
		int C = 0, cntC = 0, sum = 0 ;

		for ( int i = 1 ; i <= Y ; i ++ ) sum += r [ i ] ;

		for ( int i = Y + 1 ; i < maxn ; i ++  ) {
			sum += r [ i ] ;

			if ( sum > C ) {
				C = sum ;
				cntC = 1 ;
			}
			else if ( sum == C ) cntC ++ ;

			sum -= l[i-Y] ;
		}
		//output
		//----------------------------------
		cout << cntC << " " << C << endl ;
	}

	return 0 ;
}
