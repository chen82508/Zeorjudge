#include <iostream>
#include <cmath>

using namespace std ;

class RomanNumber {

public :

    int RomanToNumber ( string s ) {
        int output = 0 ;

        for ( int i = 0 ; i < s.length() ; i ++ ) {
            switch ( s [ i ] ) {
            case 'I' : output ++ ;
            break ;

            case 'V' : output += 5 ;
                if ( s [ i - 1 ] == 'I' ) output -= 2 ;
            break ;

            case 'X' : output += 10 ;
                if ( s [ i - 1 ] == 'I' ) output -= 2 ;
            break ;

            case 'L' : output += 50 ;
                if ( s [ i - 1 ] == 'X' ) output -= 20 ;
            break ;

            case 'C' : output += 100 ;
                if ( s [ i - 1 ] == 'X' ) output -= 20 ;
            break ;

            case 'D' : output += 500 ;
                if ( s [ i - 1 ] == 'C' ) output -= 200 ;
            break ;

            case 'M' : output += 1000 ;
                if ( s [ i - 1 ] == 'C' ) output -= 200 ;
            break ;
            }
        }

        return output ;
    }

    string NumberToRoman ( int Num ) {
        string output = "" ;

        if ( Num == 0 ) return output = "ZERO" ;

        while ( Num > 0 ) {
            if ( Num >= 1000 ) { Num -= 1000 ; output += "M" ; }

            else if ( Num >= 900 ) { Num -= 900 ; output += "CM" ; }

            else if ( Num >= 500 ) { Num -= 500 ; output += "D" ; }

            else if ( Num >= 400 ) { Num -= 400 ; output += "CD" ; }

            else if ( Num >= 100 ) { Num -= 100 ; output += "C" ; }

            else if ( Num >= 90 ) { Num -= 90 ; output += "XC" ; }

            else if ( Num >= 50 ) { Num -= 50 ; output += "L" ; }

            else if ( Num >= 40 ) { Num -= 40 ; output += "XL" ; }

            else if ( Num >= 10 ) { Num -= 10 ; output += "X" ; }

            else if ( Num >= 9 ) { Num -= 9 ; output += "IX" ; }

            else if ( Num >= 5 ) { Num -= 5 ; output += "V" ; }

            else if ( Num >= 4 ) { Num -= 4 ; output += "IV" ; }

            else { Num -= 1 ; output += "I" ; }
        }

        return output ;
    }
};

int main () {
    string num1, num2 ;

    while ( cin >> num1 ) {
        RomanNumber pt = RomanNumber() ;
        RomanNumber pt1 = RomanNumber() ;
        RomanNumber pt2 = RomanNumber() ;

        if ( num1 == "#" ) break ;

        cin >> num2 ;

        cout << pt.NumberToRoman ( abs ( pt1.RomanToNumber ( num1 ) - pt2.RomanToNumber ( num2 ) ) ) << endl;
    }

    return 0 ;
}
