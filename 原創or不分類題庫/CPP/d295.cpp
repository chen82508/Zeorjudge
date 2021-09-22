/******************************************************
 *
 * The calculation need three steps :
 * 1. Compute the combination that include the vacancy.
 * 2. Compute the combination that exclude the vacancy.
 * 3. Compute the repeat area of step 2.
 *
 * And 1. + 2. - 3. is the result.
 *
 ******************************************************/

#include <iostream>

typedef unsigned long long int LLI ;

using namespace std ;

LLI CBN ( LLI, LLI ) ;

int main () {
    LLI x1, y1, x2, y2, x3, y3, x4, y4 ;
    LLI x5, y5, x6, y6, x7, y7, x8, y8 ;

    while ( cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 ) {
        cin >> x5 >> y5 >> x6 >> y6 >> x7 >> y7 >> x8 >> y8 ;

        LLI cnt1 = x5 - x1 + 1,
            cnt2 = x3 - x7 + 1,
            cnt3 = x3 - x1 + 1,
            cnt4 = y5 - y1 + 1,
            cnt5 = y3 - y7 + 1,
            cnt6 = y3 - y1 + 1 ;

        LLI Inc = CBN ( cnt1, 1 ) * CBN ( cnt2, 1 ) * CBN ( cnt4, 1 ) * CBN ( cnt5, 1 ),
            Exc = CBN ( cnt3, 2 ) * ( CBN ( cnt4, 2 ) + CBN ( cnt5, 2 ) )
                + CBN ( cnt6, 2 ) * ( CBN ( cnt1, 2 ) + CBN ( cnt2, 2 ) ),
            Rep = ( CBN ( cnt1, 2 ) + CBN ( cnt2, 2 ) ) * ( CBN ( cnt4, 2 ) + CBN ( cnt5, 2 ) ) ;

        cout << Inc + Exc - Rep << endl ;
    }
}

LLI CBN ( LLI n, LLI r ) {
    LLI result ;

    if ( r == 0 )
        return 1 ;

    if ( r == 1 )
        return n ;

    result = ( n * ( n - 1 ) ) >> 1 ;

    return result ;
}
