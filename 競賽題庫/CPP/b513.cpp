#include <bits/stdc++.h>

using namespace std ;

bool isPrime ( int ) ;

int main() {
    int intTstCase, intNum ;

    cin >> intTstCase ;

    while ( intTstCase -- ) {
        cin >> intNum ;
        string strIsPrime = isPrime ( intNum ) ? "Y" : "N" ;
        cout << strIsPrime << endl ;
    }

    return 0 ;
}

bool isPrime ( int n ) {
    for ( int i = 2 ; i * i <= n ; i ++ )
        if ( n % i == 0 ) return false ;

    return true ;
}
