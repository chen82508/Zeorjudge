#include <bits/stdc++.h>

using namespace std ;

int main () {
    long long input ;

    while ( cin >> input ) {
        input == 0 ? cout << "0" : cout << input / ( abs ( input ) ) ;
        cout << endl ;
    }

    return 0 ;
}
