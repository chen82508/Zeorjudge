#include <bits/stdc++.h>

using namespace std ;

long long llGCD ( long long, long long ) ;

int main ( int argc, char** argv ) {
    int iData ;
    long long llNum ;

    while ( cin >> iData ) {
        if ( iData == 0 ) return 0 ;

        long long llAns = 1 ;

        for ( int iIdx = 0 ; iIdx < iData ; iIdx ++ ) {
            cin >> llNum ;

            llAns = llNum * llAns / llGCD ( llAns, llNum ) ;
        }

        cout << llAns << endl ;
    }

    return 0 ;
}

long long llGCD ( long long llNum1, long long llNum2 ) {
    while ( ( llNum1 %= llNum2 ) && ( llNum2 %= llNum1 ) ) ;
    return llNum1 + llNum2 ;
}
