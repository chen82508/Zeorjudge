#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

char s[1000] ;

int DFS ( int l, int r ) {

	int cnt = 0 ;

    for ( int i = r - 1 ; i >= l ; i -- ) {

        if ( s[i] == '(' ) cnt ++ ;

		else if ( s[i] == ')' ) cnt -- ;

        if ( s[i] == '+' && cnt == 0 ) {
            int D = DFS ( l, i ) + DFS ( i + 1, r ) ;
            return D ;
        }

        if ( s[i] == '-' && cnt == 0 ) {
            int D = DFS ( l, i ) - DFS ( i + 1, r ) ;
            return D ;
        }

    }

    for ( int i = r - 1 ; i >= l ; i -- ) {

        if ( s[i] == '(' ) cnt ++ ;

		else if ( s[i] == ')' ) cnt -- ;

        if ( s[i] == '*' && cnt == 0 ) {
            int D = DFS ( l, i ) * DFS ( i + 1, r ) ;
            return D ;
        }

        if ( s[i] == '/' && cnt == 0 ) {
            int D = DFS ( l, i ) / DFS ( i + 1, r ) ;
            return D ;
        }

        if ( s[i] == '%' && cnt == 0 ) {
            int D = DFS ( l, i ) % DFS ( i + 1, r ) ;
            return D ;
        }
    }

    if ( s[l] == '(' && s[r-1] == ')' ) {  int D = DFS ( l + 1, r - 1 ) ;  return D ;  }
    if ( s[l] == ' ' ) { int D = DFS ( l + 1, r ) ;  return D ; }
    if ( s[r - 1] == ' ' ) { int D = DFS ( l, r - 1 ) ;  return D ; }

    int now = 0;
    for ( int i = l ; i < r ; i ++ ) {

		now *= 10 ;
        now += s[i] - '0' ;

    }

    return now ;

}
int main () {

	while( fgets ( s, 1000, stdin ) ) {

		cout << DFS(0, strlen(s)-1) << endl ;
    }

    return 0 ;
}
