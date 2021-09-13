#include <bits/stdc++.h>

using namespace std ;

int iValue [ 10 ] = { 5, 10, 20, 50, 100, 200, 500, 1000, 2000 } ;
unsigned long long int ulliTable [ 10 ] [ 10001 ] = { 0 } ;

void DynamicPrg() ;

int main() {
    DynamicPrg() ;

    string strInput ;

    while ( getline ( cin, strInput ) ) {
        istringstream read ( strInput ) ;

        int iSum = 0, iNum ;

        while ( read >> iNum ) iSum += iNum ;

        if ( iSum != 0 ) cout << ulliTable [ 9 ] [ iSum / 5 ] - 1 << endl ;
    }

    return 0 ;
}

void DynamicPrg() {
    for ( int iIdx1 = 0 ; iIdx1 < 10001 ; iIdx1 ++ ) ulliTable [ 0 ] [ iIdx1 ] = iIdx1 + 1 ;

    for ( int iIdx2 = 1 ; iIdx2 <= 9 ; iIdx2 ++ ) {
        int iIdx ;

        for ( iIdx = 0 ; iIdx < iValue [ iIdx2 ] / 5 ; iIdx ++ ) ulliTable [ iIdx2 ] [ iIdx ] = ulliTable [ iIdx2 - 1 ] [ iIdx ] ;

        for ( iIdx = iValue [ iIdx2 ] / 5 ; iIdx < 10001 ; iIdx ++ ) ulliTable [ iIdx2 ] [ iIdx ] = ulliTable [ iIdx2 - 1 ] [ iIdx ] + ulliTable [ iIdx2 ] [ iIdx - iValue [ iIdx2 ] / 5 ] ;
    }
}
