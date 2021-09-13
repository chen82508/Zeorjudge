#include <bits/stdc++.h>

using namespace std ;

int iN, iM ;
int iNum [ 100 ] ;
int iRes [ 100 ] ;

void comb ( int iNowIdx, int iAddIdx ) ;

int main() {
    while ( cin >> iN ) {
        if ( iN == 0 ) break ;

        for ( int iIdx = 0 ; iIdx < iN ; iIdx ++ ) cin >> iNum [ iIdx ] ;

        sort ( iNum, iNum + iN ) ;

        cin >> iM ;

        comb ( 0, -1 ) ;

        cout << endl ;
    }

    return 0;
}


void comb ( int iNowIdx, int iAddIdx ) {
    if ( iNowIdx == iM ) {
        for ( int iIdx = 0 ; iIdx < iM ; iIdx ++ ) cout << iRes [ iIdx ] << " " ;

        cout << endl ;
    }
    else {
        for ( int iIdx = iAddIdx + 1 ; iIdx < iN ; iIdx ++ ) {
            iRes [ iNowIdx ] = iNum [ iIdx ] ;
            comb ( iNowIdx + 1, iIdx ) ;
        }
    }
}
