#include <iostream>
#include <cmath>

using namespace std ;

int iInput [ 200000 ], iInputCnt, iMax, iIdx1, iIdx2, iTableCnt ;
bool bolFlag ;

void ConPrimeTable() ;
void PrintResult ( int* ) ;

int main () {

	iInputCnt = 0 ;

	while ( cin >> iInput [ iInputCnt ] ) {
		if ( iMax < iInput [ iInputCnt ] ) iMax = iInput [ iInputCnt ] ;
		iInputCnt ++ ;
	}

	ConPrimeTable() ;

	return 0 ;
}

void ConPrimeTable() {
	int iMaxSqrt = static_cast<int>(ceil(sqrt(iMax))) ;
	int iPrimeTable [ iMaxSqrt ] ;

	iTableCnt = 0 ;

	iPrimeTable [ iTableCnt ++ ] = 2 ;

	for ( iIdx1 = 3 ; iIdx1 <= iMaxSqrt ; iIdx1 += 2 ){

		bolFlag = false ;

		for ( iIdx2 = 0 ; iIdx2 < iTableCnt ; iIdx2 ++ ){
			if ( iIdx1 % iPrimeTable [ iIdx2 ] == 0 ){
				bolFlag = true ; break ;
			}
		}
		if ( !bolFlag ) iPrimeTable [ iTableCnt ++ ] = iIdx1 ;
	}

	PrintResult ( iPrimeTable ) ;
}

void PrintResult ( int iPrimeTable[] ) {
    for ( iIdx1 = 0 ; iIdx1 < iInputCnt ; iIdx1 ++ ){
		bolFlag = false ;

		for ( iIdx2 = 0 ; iIdx2 < iTableCnt && iInput [ iIdx1 ] > iPrimeTable [ iIdx2 ] ; iIdx2 ++ ){
			if ( iInput [ iIdx1 ] % iPrimeTable [ iIdx2 ] == 0 ){
				bolFlag = true ; break ;
			}
		}

		string strResult = bolFlag ? "false" : "true" ;

		cout << strResult << endl ;
	}
}
