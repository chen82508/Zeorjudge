#include <iostream>
#include <cstdio>
#include <set>

using namespace std ;

int main () {
    set<string> S ;
    string line ;

    while ( getline ( cin, line ) ) {
        puts ( S.count ( line ) ? "YES" : "NO" ) ;
        S.insert ( line ) ;
    }

    return 0 ;
}
