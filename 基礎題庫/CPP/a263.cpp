#include <iostream>
#include <cstdio>

using namespace std ;

int Mth [] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } ;

int CntDay ( int Y, int M, int D ) {

    int Yi = 0, Mi = 1, Re = 0 ;

    while ( Yi != Y ) {
        if ( Yi %4 == 0 && Yi % 100 != 0 || Yi % 400 == 0 )
            Re += 366 ;
        else
            Re += 365 ;

        Yi ++;
    }

    while ( Mi != M ){
        if ( Mi == 2 ) {
            if ( Yi % 4 == 0 && Yi % 100 != 0 || Yi % 400 == 0 )
                Re ++;
        }

        Re += Mth [ Mi ] ;
        Mi ++ ;
    }

    Re += D ;

    return Re ;
}

int Y1, M1, D1, C1 ;
int Y2, M2, D2, C2 ;
int Ans ;

int main () {

    while ( cin >> Y1 >> M1 >> D1 ) {
        C1 = CntDay ( Y1, M1, D1 ) ;

        cin >> Y2 >> M2 >> D2 ;
        C2 = CntDay ( Y2, M2, D2 ) ;

        Ans = ( C1 > C2  ? ( C1 - C2 ) : ( C2 - C1 ) ) ;

        cout << Ans << endl ;
    }

    return 0 ;
}
