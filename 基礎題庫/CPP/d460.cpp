#include <cstdio>

int main () {
    int  a ;

    while ( scanf ( "%d", &a ) != EOF ) {
        if ( a >= 6 && a <= 11 )
            printf ( "590\n" ) ;
        else if ( a >= 12 && a <= 17 )
            printf ( "790\n" ) ;
        else if ( a >= 18 && a <= 59 )
            printf ( "890\n" ) ;
        else if ( a >= 60 )
            printf ( "399\n" ) ;
        else
            printf ( "0\n" ) ;
    }

    return 0 ;
}
