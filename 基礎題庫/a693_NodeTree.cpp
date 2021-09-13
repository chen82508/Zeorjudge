/*****************************
 *
 *　使用線段樹 ( 節點 ) 解題
 *
 *****************************/

#include <iostream>

using namespace std ;

int N, M;
int Satis [ 200000 ] ;

// Declare node's data structure
//放置下一個節點位址的欄位
//放置節點資料的欄位
//-------------------------------------------
struct Node {
    Node *l, *r ;
    int sum ;
};

// Function used to construct the node table
//將一新節點建立於指標所指的位址
//使用條件遞迴建立完整鏈表
//-------------------------------------------
void make ( Node *&O, int L, int R ) {
    O = new Node () ;

    if ( L + 1 != R ) {
        make ( O -> l, L, ( L + R ) / 2 ) ;
        make ( O -> r, ( L + R ) / 2, R ) ;

        O -> sum = O -> l -> sum + O -> r -> sum ;
    }
    else O -> sum = Satis [ L ] ;
}

// Get the summary by the query index
//-------------------------------------------
int sum ( Node *O, int L, int R, int A, int B ) {
    if ( B <= L || R <= A ) return 0 ;
    else if ( A <= L && R <= B ) return O -> sum ;
    else {
        int s1 = sum ( O -> l, L, ( L + R ) / 2, A, B ) ;
        int s2 = sum ( O -> r, ( L + R ) / 2, R, A, B ) ;

        return s1 + s2 ;
    }
}

// Return the occupied memories when finish a loop
//-------------------------------------------
void destory ( Node *&O, int L, int R ) {
    if ( L + 1 != R ) {
        destory ( O -> l, L, ( L + R ) / 2 ) ;
        destory ( O -> r, ( L + R ) / 2, R ) ;
    }

    delete O ;
}

Node *root ;

// Execute block
//-------------------------------------------
int main () {
    while ( cin >> N >> M ) {

        for ( int Ni = 1 ; Ni <= N ; Ni ++ )
            cin >> Satis [ Ni ] ;

        make ( root, 1, N + 1 ) ;

        for ( int Mi = 1 ; Mi <= M ; Mi ++ ) {
            int A, B;

            cin >> A >> B ;
            cout << sum ( root, 1, N + 1, A, B + 1 ) << endl ;
        }

        destory ( root, 1, N + 1 ) ;
    }

    return 0 ;
}
