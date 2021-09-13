#include <iostream>

using namespace std ;

class ResultOfDivination{

public :

    Divination ( int Month, int Day ) {
        int Sum = ( Month * 2 + Day ) % 3 ;

        switch ( Sum ) {
        case 0 :
            cout << "´¶³q" << endl ;
            break ;

        case 1 :
            cout << "¦N" << endl ;
            break ;

        case 2 :
            cout << "¤j¦N" << endl ;
            break ;
        }
    }
};

int main () {

    int M, D ;

    while ( cin >> M >> D ) {
        ResultOfDivination pt = ResultOfDivination() ;
        pt.Divination ( M, D ) ;
    }
    return 0;
}
