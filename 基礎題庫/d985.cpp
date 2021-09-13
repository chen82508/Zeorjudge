#include <bits/stdc++.h>

using namespace std ;

int main() {
    int iTestCase, iLoop, iCount = 0 ;

    cin >> iTestCase ;

    while ( iTestCase -- ) {
        cin >> iLoop ;

        int iMin, iSec, iBest = 10000 , iSum = 0 ;

        for ( int iLoopIdx = 0 ; iLoopIdx < iLoop ; iLoopIdx ++ ) {
            cin >> iMin >> iSec ;
            iSec = iMin * 60 + iSec ;
            iBest = iSec < iBest ? iSec : iBest ;
            iSum += iSec ;
        }

        iSum /= iLoop ;

        cout << "Track " << ++ iCount << ":\n" << "Best Lap: " << iBest / 60 << " minute(s) " << iBest % 60 << " second(s).\n" << "Average: " << iSum / 60 << " minute(s) " << iSum % 60 << " second(s).\n\n" ;
    }

    return 0 ;
}
