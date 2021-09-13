#include <iostream>

using namespace std ;

int main () {
    int a, b ;
    int cnt = 0 ;

    while ( cin >> a >> b ) {
        for ( int i = a ; i <= b ; i ++ )
            if ( i % 4 == 0 && i % 100 != 0 || i % 400 == 0 )
                cnt ++ ;

        cout << cnt << endl ;
    }

    return 0 ;
}
