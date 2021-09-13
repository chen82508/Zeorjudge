#include <bits/stdc++.h>

using namespace std ;

int main() {
    unsigned long long iGroup, iTestCase, iYard, iAnimal, iEP, iBonus ;

    while ( cin >> iGroup ) {
        for ( int i = 0 ; i < iGroup ; i ++ ) {
            cin >> iTestCase ;

            iBonus = 0 ;

            for ( int i = 0 ; i < iTestCase ; i ++ ) {
                cin >> iYard >> iAnimal >> iEP ;
                iBonus += iYard * iEP ;
            }

            cout << iBonus << endl ;
        }
    }

    return 0 ;
}
