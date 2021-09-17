#include <iostream>

using namespace std ;

int main () {
    int runTimes ;
    cin >> runTimes ;

    while ( runTimes -- ) {
        int H1, M1, H2, M2, M3 ;
        cin >> H1 >> M1 >> H2 >> M2 >> M3 ;

        H1 = H1 + ( M1 + M3 ) / 60 ;
        M1 = ( M1 + M3 ) % 60 ;

        ( H1 <= H2 ) ? ( M1 <= M2 ? cout << "Yes" : cout << "No" ) : cout << "No";
        cout << endl ;
    }
}
