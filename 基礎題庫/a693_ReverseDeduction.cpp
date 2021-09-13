/*************************
 *
 *　使用反向扣除法解題
 *
 *************************/

#include <iostream>
#include <cstring>
#define maxs 100000

using namespace std ;

int Satisfaction [ maxs + 1 ] = { 0 } ;

int main () {
    int Quantity, Line ;

    while ( cin >> Quantity >> Line ) {
        memset ( Satisfaction, 0, sizeof(Satisfaction) ) ;

        int nums, sum = 0 ;

        for ( int i = 1 ; i <= Quantity ; i ++ ) {
            cin >> nums ;
            sum += nums ;
            Satisfaction [ i ] = sum ;
        }

        int left, right ;

        for ( int i = 1 ; i <= Line ; i ++ ) {
            cin >> left >> right ;
            cout << Satisfaction [ right ] - Satisfaction [ left - 1 ] << endl ;
        }
    }

    return 0 ;
}
