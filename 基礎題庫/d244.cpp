#include <iostream>
#include <vector>

using namespace std ;

int main() {
    vector<int> vCnt ;
    vector<int> vNum ;
    int input ;

    while ( cin >> input ) {
        int iIdx ;

        for ( iIdx = 0 ; iIdx < vNum.size() ; iIdx ++ ) {
            if ( input == vNum [ iIdx ] ) {
                vCnt [ iIdx ] ++ ;
                break ;
            }
        }

        if ( iIdx == vNum.size() ) {
            vNum.push_back ( input ) ;
            vCnt.push_back ( 1 ) ;
        }
    }

    for ( int iIdx = 0 ; iIdx < vNum.size() ; iIdx ++ )
        if ( vCnt [ iIdx ] % 3 == 2 ) cout << vNum [ iIdx ] << endl ;
}
