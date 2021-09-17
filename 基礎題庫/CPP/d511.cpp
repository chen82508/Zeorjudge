#include <iostream>

using namespace std ;

int main () {
    int a, b, c ;
    int days = 5, cntPlus = 0 ;

    while ( days ) {
        cin >> a >> b >> c ;

        if ( ( a + b ) > c && ( a + c ) > b && ( b + c ) > a )
            cntPlus ++ ;
        days -- ;
    }

    cout << cntPlus << endl ;

    return 0 ;
}
