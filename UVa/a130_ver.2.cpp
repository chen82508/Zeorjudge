#include <bits/stdc++.h>

using namespace std ;

int main () {
    const int URL_NUMBER = 10 ;

    int T ;

    while ( scanf ( "%d", &T ) != EOF ){
        for ( int i = 0 ; i < T ; i ++ ) {
            vector<string> urls ;

            int maxRelevance = INT_MIN ;
            int relevance ;

            string url ;

            for ( int j = 0 ; j < URL_NUMBER ; j ++ ) {
                cin >> url ;
                scanf ( "%d", &relevance ) ;

                if ( relevance > maxRelevance ) {
                    maxRelevance = relevance ;
                    urls.clear() ;
                    urls.push_back ( url ) ;
                }
                else if ( relevance == maxRelevance )
                    urls.push_back ( url ) ;
            }

            printf ( "Case #%d:\n", i + 1 ) ;

            for ( int j = 0 ; j < urls.size() ; j ++ )
                cout << urls [ j ].c_str() << endl ;
        }
    }

    return 0 ;
}
