#include <iostream>

using namespace std ;

// Construct a function for reversing integral
//--------------------------------------------
unsigned int reverse ( unsigned int num ) {
    unsigned int rev = 0 ;

    while ( num ) {
        rev = rev * 10 + num % 10 ;
        num /= 10 ;
    }

    return rev ;
}

int main () {
    int N ;

    unsigned int num, rev ;

    while ( cin >> N ) {
        for ( int i = 0 ; i < N ; i ++ ) {
            cin >> num ;

            int times = 0 ;

            rev = reverse ( num ) ;

            // Calculus until the number equals to its reverse
            //--------------------------------------
            do {
                num = num + rev ;
                times ++ ;
                rev = reverse ( num ) ;
            } while ( num != rev ) ;

            cout << times << " " << num << endl ;
        }
    }

    return 0 ;
}
