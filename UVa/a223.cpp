#include <bits/stdc++.h>

using namespace std ;

char charline [ 1000001 ] ;
int iStrLen ;

void RecordPeriod ( vector<int>& ) ;

int main() {
    while ( scanf("%s", charline) == 1 && strcmp ( charline, "." ) ) {
        iStrLen = strlen ( charline ) ;
        vector<int> vctPeriod ( iStrLen + 1, 0 ) ;

        RecordPeriod ( vctPeriod ) ;

        int iPeriod = 0 ;

        for ( int iIdx = 1 ; iIdx <= iStrLen ; iIdx ++ )
            if ( iIdx - vctPeriod [ iIdx ] > iPeriod ) iPeriod = iIdx - vctPeriod [ iIdx ] ;

        if ( iStrLen % iPeriod != 0 ) iPeriod = iStrLen ;

        cout << iStrLen / iPeriod << endl ;
    }
}

void RecordPeriod ( vector<int>& vctRecPrd ) {
    for ( int iIdx = 2 ; iIdx <= iStrLen ; iIdx ++ ) {
        int k = vctRecPrd [iIdx - 1] ;

        while ( k > 0 && charline [ k ] != charline [iIdx - 1] ) k = vctRecPrd [ k ] ;

        if ( charline [ k ] == charline [iIdx - 1] ) vctRecPrd [ iIdx ] = k + 1 ;
        else vctRecPrd [ iIdx ] = 0 ;
    }
}
