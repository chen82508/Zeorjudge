#include <iostream>
#include <cstdio>

using namespace std ;

int main () {
    int Ans1, Ans2, Ans3, Ans4, ansLine ;
    int num1, num2, num3, num4 ;

    //Input a sequence for detection
    //----------------------------------------------
    while ( cin >> Ans1 >> Ans2 >> Ans3 >> Ans4 ) {
        cin >> ansLine ;
        getchar();

        while ( ansLine -- ) {

            // Input numbers to be tested.
            //----------------------------------------------
            num1 = getchar() - '0' ;
            getchar();

            num2 = getchar() - '0' ;
            getchar();

            num3 = getchar() - '0' ;
            getchar();

            num4 = getchar() - '0' ;
            getchar();

            // Construct a table of the number of occurrences of each number
            //----------------------------------------------
            int num [ 10 ] = {}, A = 0, B = 0 ;
            num [ Ans1 ] ++ , num [ Ans2 ] ++ , num [ Ans3 ] ++ , num [ Ans4 ] ++ ;

            // Check the if the numbers for testing is exist in the table
            //----------------------------------------------
            if ( num [ num1 ] ) num [ num1 ] -- , B ++ ;
            if ( num [ num2 ] ) num [ num2 ] -- , B ++ ;
            if ( num [ num3 ] ) num [ num3 ] -- , B ++ ;
            if ( num [ num4 ] ) num [ num4 ] -- , B ++ ;

            // Check if the numbers' positions are matched or not
            //----------------------------------------------
            if ( Ans1 == num1 ) A ++ , B -- ;
            if ( Ans2 == num2 ) A ++ , B -- ;
            if ( Ans3 == num3 ) A ++ , B -- ;
            if ( Ans4 == num4 ) A ++ , B -- ;

            // Output the result
            //----------------------------------------------
            cout << A << "A" << B << "B" << endl ;
        }
    }

    return 0 ;
}
