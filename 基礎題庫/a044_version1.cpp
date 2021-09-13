#include <iostream>

using namespace std ;

int surface_cut ( int line ) {

	if ( line == 0 ) return 1 ;

	return surface_cut ( line - 1 ) + line ;
}

int space_cut ( int n ) {

	if ( n == 0 ) return 1 ;

	return space_cut ( n - 1 ) + surface_cut ( n - 1 ) ;
}

int main () {

	int cut_n ;

	while ( cin >> cut_n ) {
		cout << space_cut ( cut_n ) << endl ;
	}

	return 0 ;
}

/**
 * 平面上，相異 n 條直線，最多可分割出 C ( n + 1, 2 ) + 1 個部分
 * 空間中，新的平面 (第 n + 1 個) 切割下去，會被前 n 個平面畫出 n 條線
 * 即最多可增加 n 條線可分割的最多區域數
 * 所以空間中，相異 n 個平面最多可分割出 C ( n + 1, 3 ) + n + 1 個區域
