#include <iostream>

using namespace std ;

int main ( void ) {
    long long num ;

    while ( cin >> num )
        cout << ( num & 1 == 1 ? "Odd" : "Even" ) << endl ;
}
