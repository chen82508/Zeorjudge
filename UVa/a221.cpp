#include <bits/stdc++.h>

using namespace std ;

string StringMerge ( string ) ;

int main() {
    int iTestCase ;

    cin >> iTestCase ;

    getchar();

    string strTeams, strJudges, strJudgeRes ;

    for ( int iInputIdx = 1 ; iInputIdx <= iTestCase ; iInputIdx ++ ) {
        getline ( cin, strTeams ) ;
        getline ( cin, strJudges ) ;

        if ( strTeams == strJudges ) strJudgeRes = "Yes" ;
        else strJudgeRes = StringMerge ( strTeams ) == StringMerge ( strJudges ) ? "Output Format Error" : "Wrong Answer" ;

        cout << "Case " << iInputIdx << ": " << strJudgeRes << "\n" ;
    }

    return 0 ;
}

string StringMerge ( string strInput ) {
    string strOutput ;

    for ( int i = 0 ; strInput [ i ] ; i ++ )
        if ( strInput [ i ] != ' ' ) strOutput.push_back ( strInput [ i ] ) ;

    return strOutput ;
}
