#include <iostream>

using namespace std ;

int main () {
    long long n, k ;

    while ( cin >> n >> k ) {
        long long sum = n ;

        while ( n >= k ) {
            sum += n / k ;
            n = ( n / k ) + ( n % k ) ;
        }

        cout << sum << endl ;
    }

    return 0 ;
}
