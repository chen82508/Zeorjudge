/************************************************************
 *
 * It's 360 degrees as hour hand and minute hand run a round.
 * A scale of a clock is 6 degrees.
 * The calculation method of the scale of hour hand :
 *          hour * 30 + minute / 60 * 30
 * The calculation method of the scale of minute hand :
 *          minute * 6
 *
 * Use static_cast to do the type convert.
 *
 ************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std ;

int main () {
    int H, M ;
    char recycle ;
        // Use a character to store ':'

    while ( cin >> H >> recycle >> M ) {
        if ( H == 0 && M == 0 )
            break ;

        double H_angle = static_cast <double> ( H ) * 30.0 + static_cast <double> ( M ) / 60.0 * 30.0 ;
        double M_angle = static_cast <double> ( M ) * 6.0 ;
        double angle = fabs ( H_angle - M_angle ) ;

        while ( angle > 180 )
            angle = fabs ( 360 - angle ) ;

        cout << fixed << setprecision ( 3 ) << angle << endl ;
    }

    return 0 ;
}
