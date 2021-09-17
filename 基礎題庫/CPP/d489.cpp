#include <iostream>

using namespace std ;

int main ( void ) {
    int s = 0, s1, s2, s3 ;

    while ( cin >> s1 >> s2 >> s3 ) {
        s = ( s1 + s2 + s3 ) / 2 ;

        cout << s * ( s - s1 ) * ( s - s2 ) * ( s - s3 ) << endl ;
    }
}
