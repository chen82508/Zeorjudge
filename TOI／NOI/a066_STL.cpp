/***********************************************************
 *
 * Use Standard Template Library (STL) to solve this problem
 *
 * 由於此題的最小波動值可能重複，故使用 multiset
 *
 ***********************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <set>

using namespace std ;

int Ans = 0 ;
int A [ 40000 ] ;

multiset <int> S ;

int main () {
    int N ;
    scanf ( "%d", &N ) ;

    int i = 0, p ;

    while ( scanf ( "%d", &p ) != EOF )
        A [ i ++ ] = p ;

    for ( int Ni = 0 ; Ni < N ; Ni ++ ) {
        int t = A [ Ni ] ;

        S.insert ( t ) ;

        if ( Ni ) {
            multiset <int> :: iterator it1 = S.find ( t ), it2 = it1, it3 = it1 ;

            if ( it1 == S.begin() )
                Ans += *( ++ it2 ) - t ;
            else if ( it1 == --S.end() )
                Ans += t - * ( -- it3 ) ;
            else
                Ans += min ( *( ++ it2 ) - t, t - *( -- it3 ) ) ;
        }
        else
            Ans += abs ( t ) ;
    }

    cout << Ans << endl ;
}
