#include <iostream>

using namespace std ;

int main() {
    unsigned long long int ulliNum ;

    while ( cin >> ulliNum ) {
        unsigned long long int ulliAns = 0 ;

        // Compute the times of factor 5
        for ( unsigned long long int ulliIdx = 5 ; ulliIdx <= ulliNum ; ulliIdx *= 5 ) ulliAns += ulliNum / ulliIdx ;

        cout << ulliAns << endl ;
    }

    return 0 ;
}
