/****************************************************
 *
 * Use stack and DFS method
 * This code lead to "Time limit exceed" on Zerojudge
 *
 ****************************************************/

#include <bits/stdc++.h>

using namespace std ;

stack< int > stk ;
stack< int > T ;

int N ;

void DFS ( int l, int r, int n ) {
    if ( l == r && n == N * 2 ) {
        while ( ! stk.empty() ) {
            T.push ( stk.top() ) ;
            stk.pop() ;
        }

        while ( ! T.empty() ) {
            if ( T.top() == 0 )
                cout << "(" ;
            else if ( T.top() == 1 )
                cout << ")" ;

            stk.push ( T.top() ) ;
            T.pop() ;
        }

        cout << endl ;
    }

    if ( n == N * 2 ) return ;

    if ( l + 1 <= N ) {
        stk.push ( 0 ) ;
        DFS ( l + 1, r, n + 1 ) ;
        stk.pop() ;
    }

    if ( l > r && r + 1 <= N ) {
        stk.push ( 1 ) ;
        DFS ( l, r + 1, n + 1 ) ;
        stk.pop () ;
    }

    return ;
}

int main () {
    while ( cin >> N ) {
        DFS ( 0, 0, 0 ) ;
        cout << endl ;
    }

    return 0 ;
}
