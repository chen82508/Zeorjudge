#include <bits/stdc++.h>

using namespace std ;

int main() {
    int iPoint = 1, iCarry, iCurDigit ;
    int iResult [ 99999 ] = { 0 } ;

    iResult [ 0 ] = 1 ;

    for ( int iIdx1 = 2 ; iIdx1 < 101 ; iIdx1 ++ ) {
        for ( int iIdx2 = 101 - iIdx1 ; iIdx2 > 0 ; iIdx2 -- ) {
            iCarry = 0 ;

            for ( iCurDigit = 0 ; iCurDigit < iPoint ; iCurDigit ++ ) {
                iResult [ iCurDigit ] = iResult [ iCurDigit ] * iIdx1 + iCarry ;
                iCarry = iResult [ iCurDigit ] / 10 ;
                iResult [ iCurDigit ] = iResult [ iCurDigit ] % 10 ;
            }

            iResult [ iCurDigit ] = iResult [ iCurDigit ] + iCarry ;

            while ( iResult [ iCurDigit ] > 9 ) {
                iCarry = iResult [ iCurDigit ] / 10 ;
                iResult [ iCurDigit ] = iResult [ iCurDigit ] % 10 ;
                iCurDigit ++ ;
                iResult [ iCurDigit ] = iCarry ;
            }

            iPoint = iCurDigit + ( iCarry > 0 ) ;
        }
    }

    for ( int iIdx = iPoint - 1 ; iIdx >= 0 ; iIdx -- ) cout << iResult [ iIdx ] << endl ;

    return 0 ;
}
