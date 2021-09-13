#include <iostream>

using namespace std ;

int main () {
    int n ;

    while ( cin >> n ) {
        for ( int i = 0 ; i < n ; i ++ ) {
            int x, y, yee ;

            cin >> x >> y ;

            yee = 100 - x - y ;

            if ( yee > 0 && yee <= 30 )
                cout << "sad!" << endl ;
            else if ( yee > 30 && yee <= 60 )
                cout << "hmm~~" << endl ;
            else if ( yee > 60 && yee < 100 )
                cout << "Happyyummy" << endl ;
            else
                cout << "evil!!" << endl ;
        }
    }

    return 0 ;
}
