#include <iostream>

using namespace std ;

int main() {
    int N ;

    while ( cin >> N ) {
        int S = 0 ;

        for ( int factor = 1 ; factor <= N / 2 ; factor ++ )
            if ( N % factor == 0 )
                S += factor ;

        if ( S == N )
            cout << "完全數" << endl ;
        else
            cout << ( S > N ? "盈數" : "虧數" ) << endl ;
    }

    return 0 ;
}
