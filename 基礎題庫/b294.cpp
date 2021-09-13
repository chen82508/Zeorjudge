#include <iostream>

using namespace std ;

int main () {
    int Days ;

    while ( cin >> Days ) {
        int n [ Days ], sum = 0 ;

        for ( int i = 1 ; i <= Days ; i ++ ) {
            cin >> n [ i ] ;
            sum += n [ i ] * i ;
        }

        cout << sum << endl ;
    }

    return 0 ;
}
