/****************************************************
 *
 * 若輸入值 a > b ，則先使用 XOR 運算子將 a、b 互換
 *
 ****************************************************/

#include <iostream>

using namespace std ;

int main () {
    long long a, b ;

    while ( cin >> a >> b ) {
        if ( a > b )
            a ^= b ^= a ^= b ;

        a & 1 == 1 ? a ++ : a += 0 ;
        b & 1 == 1 ? b -- : b -= 0 ;

        cout << ( ( a + b ) * ( b - a + 2 ) >> 2 ) << endl ;
    }

    return 0 ;
}
