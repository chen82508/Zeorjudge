#include <bits/stdc++.h>

using namespace std;

int iNum1, iNum2, iValue, iIdx1, iIdx2 ;
stringstream ssLine ;
stack<int> stkCalculate ;

void DealWithInput ( string str ) ;
void GetValue ( string str ) ;
void Calculate ( int iElement1, int iElement2, char chOperator ) ;

int main ( int argc, char *argv[] ) {
    string strInput ;

    while ( getline ( cin, strInput ) ) {
        iIdx1 = iIdx2 = 0 ;

        while ( iIdx1 < strInput.length() ) {
            DealWithInput ( strInput ) ;
        }

        cout << stkCalculate.top() << endl ;

        stkCalculate = stack<int>() ;
    }

    return 0;
}

void DealWithInput ( string str ) {
    if ( str [ iIdx1 ] >= '0' && str [ iIdx1 ] <= '9' ) GetValue ( str ) ;
    else {
        iNum2 = stkCalculate.top() ; stkCalculate.pop() ;
        iNum1 = stkCalculate.top() ; stkCalculate.pop() ;

        Calculate ( iNum1, iNum2, str [ iIdx1 ] ) ;

        iIdx1 += 2 ;
    }
}

void GetValue ( string str ) {
    for ( iIdx2 = iIdx1 + 1 ; iIdx2 < str.length() ; iIdx2 ++ )
        if ( str [ iIdx2 ] == ' ' ) break ;

    string strTmp = str.substr ( iIdx1, iIdx2 - iIdx1 ) ;

    ssLine.clear() ;
    ssLine << strTmp ;
    ssLine >> iValue ;
    stkCalculate.push ( iValue ) ;
    iIdx1 = iIdx2 + 1 ;
}

void Calculate ( int iElement1, int iElement2, char chOperator ) {
    switch ( chOperator ) {
    case '+' :
        stkCalculate.push ( iElement1 + iElement2 ) ;
        break ;

    case '-' :
        stkCalculate.push ( iElement1 - iElement2 ) ;
        break ;

    case '*' :
        stkCalculate.push ( iElement1 * iElement2 ) ;
        break ;

    case '/' :
        stkCalculate.push ( iElement1 / iElement2 ) ;
        break ;

    case '%' :
        stkCalculate.push ( iElement1 % iElement2 ) ;
        break ;

    default : break ;
    }
}
