#include <iostream>

using namespace std ;

int main () {
    int hh, mm ;

    while ( cin >> hh >> mm )
        cout << ( ( hh == 7 && mm >= 30 ) || ( hh >= 8 && hh <= 16 ) ? "At School" : "Off School" )<< endl ;

    return 0 ;
}
