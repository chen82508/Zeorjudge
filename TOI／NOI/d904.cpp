/*************************************************************************
 *
 * Initial f[0] to 0, others to INT_MAX
 * If the currency is only 1, f[n] = n for each n is Nature.
 * If the new currency 5 is added in, then f[5n] = n for each n is Nature.
 * Repeat the idea above.
 *
 * Reference web :
 *      https://sites.google.com/a/mail.hpsh.tp.edu.tw/pc/jiao-cai/d904
 *
 *************************************************************************/

#include <iostream>
#include <climits>

typedef long long int LLI ;

using namespace std ;

int main() {
    LLI Money, n, coin [ 10 ], i, j ;

    // Array f[] is used to store the number of coins
    //---------------------------------------------
    LLI f [ 50001 ] = { INT_MAX } ;

    while ( cin >> Money >> n ) {
        for ( i = 0 ; i < n ; i ++ )
            cin >> coin [ i ] ;

        for ( i = 1 ; i <= Money ; i ++ )
            f [ i ] = INT_MAX ;

        f [ 0 ] = 0 ;

        // Plus each currency in
        //---------------------------------------------
        for ( i = 0 ; i < n ; i ++ )

            // Compute how many coins you need at least
            //---------------------------------------------
            for ( j = coin [ i ] ; j <= Money ; j ++ )

                // Sum the number of coins, and plus 1
                //---------------------------------------------
                if ( f [ j ] > f [ j - coin [ i ] ] + 1 )
                    f [ j ] = f [ j - coin [ i ] ] + 1 ;

        cout << f [ Money ] << endl ;
    }

    return 0 ;
}
