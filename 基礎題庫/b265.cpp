/***************************************************************************
 *
 * Use map to construct a hash table to solve this problem.
 * First, sort each array, and use the result to be the index of hash table.
 *
 ***************************************************************************/

#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>

using namespace std ;

int main () {
    int n, A [ 5 ] ;
    char buf [ 20 ] ;

    while ( scanf ( "%d", &n ) == 1 && n ) {
        string str ;
        map<string, int> record ;

        //================================================================================
        // 1. Input five integers, and then sort these integers.
        // 2. Think of these five integers as a large integer.
        // 3. Use this large integer as the index of hash table.
        //================================================================================
        while ( n -- ) {
            scanf ( "%d %d %d %d %d", &A [ 0 ], &A [ 1 ], &A [ 2 ], &A [ 3 ], &A [ 4 ] ) ;
            sort ( A, A + 5 ) ;
            sprintf ( buf, "%d%d%d%d%d" , A [ 0 ], A [ 1 ], A [ 2 ], A [ 3 ], A [ 4 ] ) ;
            str = buf ;
            record [ str ] ++ ;
        }

        int max = 0, maxNum = 0 ;

        for ( map<string, int> :: iterator i = record.begin() ; i != record.end() ; i ++ ) {
            if ( i -> second > max ) max = i -> second, maxNum = 0 ;
            if ( i -> second == max ) maxNum += max ;
        }

        printf ( "%d\n", maxNum ) ;
    }

    return 0 ;
}
