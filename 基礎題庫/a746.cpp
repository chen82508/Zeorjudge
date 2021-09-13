#include <iostream>
#include <algorithm>    //std :: fill

using namespace std ;

bool occupy [ 600 ] [ 600 ] ;

int main () {

    int M, N ;

    while ( cin >> N >> M ) {

            fill ( occupy [ 0 ], occupy [ 600 - 1 ] + 600, false ) ;

            int px, py ;

            for ( int Mi = 0 ; Mi < M ; Mi ++ ) {

                int x, y ;

                cin >> x >> y ;

                if ( !Mi ) px = x, py = y ;

                while ( px != x ){
                    px < x ? px ++ : px -- ;
                    occupy [ px ] [ py ] = true ;
                }

                while ( py != y ){
                    py < y ? py ++ : py -- ;
                    occupy [ px ] [ py ] = true ;
                }

                occupy [ x ] [ y ] = true ;
            }

            for ( int Ni = 0 ; Ni < N + 2 ; Ni ++ )
                cout << "-" ;
            cout << endl ;

            for ( int Ni = 1 ; Ni <= N ; Ni ++ ) {
                cout << "|" ;

                for ( int Nj = 1 ; Nj <= N ; Nj ++ )
                    occupy [ Ni ] [ Nj ] ? cout << "*" : cout << " " ;

                cout << "|" << endl ;
            }

            for ( int Ni = 0 ; Ni < N+2 ; Ni ++ )
                cout << "-" ;
            cout << endl ;

    }

    return 0 ;

}
