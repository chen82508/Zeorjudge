#include <bits/stdc++.h>

using namespace std ;

string Cmp ( string, string ) ;

int main() {
    int iGroup ;
    string strA, strB, strC ;

    while ( cin >> iGroup ) {
        for ( int i = 0 ; i < iGroup ; i ++ ){
            cin >> strA >> strB >> strC ;

            cout << Cmp ( Cmp ( strA, strB ), strC ) << endl ;
        }
    }
}

string Cmp ( string str1, string str2 ) {
    string strMax ;

    if ( str1.length() != str2.length() ) strMax = str1.length() > str2.length() ? str1 : str2 ;
    else {
        for ( int iStrIdx = 0 ; iStrIdx < str1.length() ; iStrIdx ++ ) {
            if ( str1 [ iStrIdx ] == str2 [ iStrIdx ] ) continue ;
            else {
                strMax = static_cast<int>(str1[iStrIdx]) > static_cast<int>(str2[iStrIdx]) ? str1 : str2 ;
                break ;
            }
        }
    }

    return strMax ;
}
