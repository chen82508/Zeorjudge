#include <iostream>

using namespace std ;

class EuclideanAlgorithm {

public :

    GCD ( int N1, int N2 ) {
        while ( ( N1 %= N2 ) && ( N2 %= N1 ) ) ;
        cout << N1 + N2 << endl ;
    }
};

int main () {
	int num1, num2 ;

	while ( cin >> num1 >> num2 ) {

		EuclideanAlgorithm findGCD = EuclideanAlgorithm();
		findGCD.GCD ( num1, num2 ) ;
	}

	return 0 ;
}
