#include <bits/stdc++.h>

using namespace std ;

string morse[] = {
    ".-",  "-...", "-.-.",  "-..", ".",  "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--",
    "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };

int main() {
    map<string, char> R ;

    for ( int index = 0 ; index < 26 ; index ++ ) R [ morse [ index ] ] = index + 'A' ;

    int iTestCase ;
    string strLine ;

    cin >> iTestCase ;

    while ( getchar() != '\n' ) ;

    while ( iTestCase -- ) {
        getline( cin, strLine ) ;
        stringstream sStrIn ( strLine ) ;

        while ( sStrIn >> strLine ) putchar ( R [ strLine ] ) ;

        puts ( "" ) ;
    }

    return 0 ;
}
