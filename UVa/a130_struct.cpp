#include <bits/stdc++.h>

using namespace std ;

struct URL {
    string strUrl ;
    int relevance ;
};

int main () {
    int T ;
    URL urls [ 10 ] ;

    while ( cin >> T ) {
        for ( int i = 0 ; i < T ; i ++ ) {
            int maximum = INT_MIN ;
            vector<string> results ;

            for ( int j = 0 ; j < 10 ; j ++ ) {
                cin >> urls [ j ].strUrl >> urls [ j ].relevance ;

                if ( urls [ j ].relevance > maximum ) {
                    maximum = urls [ j ].relevance ;
                    results.clear() ;
                    results.push_back ( urls [ j ].strUrl ) ;
                }
                else if ( urls [ j ].relevance == maximum )
                    results.push_back ( urls [ j ].strUrl ) ;
            }

            cout << "Case #" << i + 1 << ":" << endl ;

            for ( int j = 0 ; j < results.size() ; j ++ )
                cout << results [ j ].c_str() << endl ;
        }
    }

    return 0 ;
}
