#include <iostream>
#include <sstream>
#include <cstdlib>

using namespace std ;

int main () {
    string str ;

    while ( getline ( cin, str ) ) {
        istringstream read ( str ) ;

        string word ;

        float sum = 0.0 ;

        while ( read >> word ) {
            string left, right ;

            istringstream parse ( word ) ;

            getline ( parse, left, ':' ) ;
            getline ( parse, right, ':' ) ;

            //cout << left << " " << right << endl ;

            if ( atoi ( left.c_str() ) & 1 )
                sum += atof ( right.c_str() ) ;
            else
                sum -= atof ( right.c_str() ) ;
        }

        cout << sum << endl ;
    }

    return 0 ;
}
