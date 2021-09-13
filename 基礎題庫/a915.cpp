#include <iostream>
#include <algorithm>

using namespace std ;

struct Point {
    int x, y ;
} s [ 100005 ] ;

int cmp ( Point a, Point b ) {
    if ( a.x != b.x )
        return a.x < b.x ;

    return a.y < b.y ;
}

int main () {
    int n ;

    while ( cin >> n ) {
        for ( int i = 0 ; i < n ; i ++ )
            cin >> s [ i ].x >> s [ i ].y ;

        sort ( s, s + n, cmp ) ;

        for ( int i = 0 ; i < n ; i ++ )
            cout << s [ i ].x << " " << s [ i ].y << endl ;
    }

    return 0 ;
}
