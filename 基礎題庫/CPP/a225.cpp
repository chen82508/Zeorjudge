#include <iostream>
#include <algorithm>

using namespace std ;

bool cmp ( int a, int b ) {

    if ( a % 10 != b % 10)
        return a % 10 < b % 10 ;

    return a > b ;

}

int main () {

    int num [ 1000 ] ;
    int N ;

    while ( cin >> N ) {

        for ( int i = 0 ; i < N ; i ++ )
            cin >> num [ i ] ;

        sort ( num, num + N, cmp ) ;

        for ( int i = 0 ; i < N - 1 ; i ++ )
            cout << num [ i ] << " ";

        cout << num [ N - 1 ] << endl;
    }

    return 0 ;

}
