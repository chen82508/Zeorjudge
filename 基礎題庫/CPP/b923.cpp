#include <iostream>
#include <stack>

using namespace std ;

int main () {
    stack <long long int> mstack ;
	int Run ;

	cin >> Run ;

	while ( Run -- ){
        int op ;
        cin >> op ;

        switch ( op ) {
        case 1 :
            mstack.pop() ;
            break ;

        case 2 :
            cout  << mstack.top() << endl ;
            break ;

        case 3 :
            long long int storeIn ;
            cin >> storeIn ;
            mstack.push ( storeIn ) ;
            break ;
        }
	}

    return 0 ;
}
