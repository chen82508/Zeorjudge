/***********************************
 *
 * 以 DFS 演算法，建立各分岐狀況
 * DFS 為 Depth-first search 之縮寫
 *
 ***********************************/

#include <iostream>
#include <cstdio>

using namespace std ;

int n ;

void DFS ( int index, int r, int l, char *s ) {
    if ( l == n ) {
        puts ( s - 2 * n ) ;
        return ;
    }

    if ( r < n )
        *s = '(', DFS ( index + 1, r + 1, l, s + 1 ) ;

    if ( r > l )
        *s = ')', DFS ( index + 1, r, l + 1, s + 1 ) ;
}

main () {
    char s [ 100 ] ;

    while ( cin >> n )
        s [ 2 * n ] = '\0', DFS ( 0, 0, 0, s ), puts("") ;

    return 0 ;
}
