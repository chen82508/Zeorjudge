#include <bits/stdc++.h>

using namespace std ;

bool IsAllInt ( string strInput ) ;

int main() {
    string strInput ;

    while ( getline ( cin, strInput ) ) {
        int iSum = 0 ;
        stringstream ssInput ( strInput ) ;

        while ( ssInput ) {
            string strWord ;

            ssInput >> strWord ;

            iSum += IsAllInt ( strWord ) ? atoi ( strWord.c_str() ) : 0 ;
        }

        cout << iSum << endl ;
    }

    return 0 ;
}


bool IsAllInt ( string strInput ) {
    for ( int iIdx = 0 ; iIdx < strInput.length() ; iIdx ++ ) {
        if ( !isdigit ( strInput [ iIdx ] ) ) return false;
    }

    return true ;
}
