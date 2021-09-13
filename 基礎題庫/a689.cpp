#include <iostream>

using namespace std ;

int main () {
    int grade ;

    while ( cin >> grade ) {
        if ( grade > 100 ) cout << "Hey, DO NOT CHEAT." << endl ;
        else if ( grade == 100 ) cout << "PERFECT >///<" << endl ;
        else if ( grade >= 90 && grade < 100 ) cout << "Good Job!" << endl ;
        else if ( grade >= 60 && grade < 90 ) cout << "Pass :)" << endl ;
        else cout << "Need +" << 60 - grade << " Q_Q..." << endl ;
    }
}
