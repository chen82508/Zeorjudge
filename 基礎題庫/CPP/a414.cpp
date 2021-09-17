#include <cstdio>
#include <cmath>

using namespace std ;

int main () {
	int N ;

	while ( scanf ( "%d", &N ) && N != 0 ) {
		int Cnt = 0 ;

		while ( N & 1 )
            Cnt ++ , N = N >> 1 ;

		printf ( "%d\n", Cnt ) ;
	}

}

/**
將輸入之N的二進位型態與 1 取 AND
若為true  則將N的二進位型態右移一位
右移後再與 1 取 AND
如此反覆至取 AND 後為 false
計算Cnt的次數即為 N + 1時需要進位的次數
*/
