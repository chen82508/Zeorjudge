#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std ;

int main () {
    unsigned long long int a, b, n ;

    int gcd ;

    stack <int> op ;

    while ( cin >> a >> b ) {
        // Find the irreducible fraction at first
        //-----------------------------------------
        gcd = __gcd ( a, b ) ;
        a /= gcd, b /= gcd ;

        // If a/b is not an integral
        //-----------------------------------------
        while ( a % b ) {
            if ( a > b )
                // Put a/b into stack,
                //which represents minus 1 a/b times
                //-----------------------------------------
                op.push ( a / b ), a %= b ;

            swap ( a, b ) ;
            op.push ( 0 ) ;
        }

        // When f(n) is an integral, n equals to 2^(f(n) - 1)
        //-----------------------------------------
        n = pow ( 2, a / b - 1 ) ;

        // Compute n
        //-----------------------------------------
        while ( !op.empty() ) {
            if ( op.top() > 0 )
                n *= pow ( 2, op.top() ) ;

            else
                n ++ ;

            op.pop() ;
        }

        cout << n << endl ;
    }

    return 0 ;
}
