#include <iostream>

using namespace std ;

class YearJudge {

public :

    LeapOrNot ( int year ) {

        if ( ( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 )
            cout << "¶|¦~" << endl ;

        else
            cout << "¥­¦~" << endl ;
    }
};

int main () {

    int Y ;

    while ( cin >> Y ) {
        YearJudge pt = YearJudge() ;
        pt.LeapOrNot ( Y ) ;
    }

    return 0 ;
}
