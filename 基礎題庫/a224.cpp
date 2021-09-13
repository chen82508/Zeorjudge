#include <iostream>
#include <cstdio>

using namespace std ;

int main () {

    char s [ 1001 ] ;
    while ( gets ( s ) ) {

        int t [ 26 ] = {}, f = 0 ;

        //建立每個字母元素於雜湊表中對應的值
        for ( int i = 0 ; s [ i ] ; i ++ ) {

            if ( s [ i ] >= 'a' && s [ i ] <= 'z' )
                t [ s [ i ] - 'a' ] ++ ;

            else if ( s [ i ] >= 'A' && s [ i ] <= 'Z' )
                t [ s [ i ] - 'A' ] ++ ;

        }

        //確認每個字母元素於其對應的雜湊表出現次數為奇數或偶數
        for ( int i = 0 ; i < 26 ; i ++)
            f += ( t [ i ] & 1 ) ;

        puts ( f > 1 ? "no..." : "yes !" ) ;
    }

    return 0 ;

}
