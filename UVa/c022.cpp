#include <iostream>

using namespace std ;

int main () {
    int Team ;

    while ( cin >> Team ) {
        int a, b ;

        for ( int i = 1 ; i <= Team ; i ++ ) {
            cin >> a >> b ;

            int sum = 0 ;

            for ( int j = a ; j <= b ; j ++ )
                if ( j & 1 )
                    sum += j ;

            cout << "Case " << i << ": " << sum << endl ;
        }
    }

    return 0 ;
}
