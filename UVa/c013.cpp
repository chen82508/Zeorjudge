#include <iostream>

using namespace std ;

int main () {

	int Runtimes, amplitude, frequency ;

	while ( cin >> Runtimes ) {

		for ( int R_t_indicator = 0 ; R_t_indicator < Runtimes ; R_t_indicator ++ ) {

			cin >> amplitude >> frequency ;

			for ( int f_indicator = 0 ; f_indicator < frequency ; f_indicator ++ ) {

				for ( int a_indicator = 1 ; a_indicator <= amplitude ; a_indicator ++ ) {

					for ( int waveform = 1 ; waveform <= a_indicator ; waveform ++)
						cout << a_indicator ;

					cout << endl ;
				}

				for ( int a_indicator = amplitude - 1 ; a_indicator >= 1 ; a_indicator -- ){

					for ( int waveform = a_indicator ; waveform >= 1 ; waveform -- )
						cout << a_indicator ;

					cout << endl ;
				}

				cout << endl ;

			}
		}
	}

	return 0 ;

}
