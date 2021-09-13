#include <bits/stdc++.h>

using namespace std ;

struct treeNode {
    int key ;
    treeNode *left, *right ;
};

treeNode *head ;

void ConstructTree ( treeNode* ) ;
void printTree ( treeNode* ) ;

int main () {
    int n ;
    treeNode *current ;

    while ( scanf ( "%d", &n ) != EOF ) {
        head = ( treeNode * ) malloc ( sizeof ( treeNode ) ) ;
        cin >> head -> key ;

        head -> left = head -> right = NULL ;
        n -- ;

        while ( n ) {
            current = ( treeNode * ) malloc ( sizeof ( treeNode ) ) ;
            cin >> current -> key ;

            current -> left = current -> right = NULL ;
            ConstructTree ( current ) ;
            n -- ;
        }

        printf ( "%d", head ->key ) ;
        printTree ( head ) ;
        printf ( "\n" ) ;
    }

    return 0 ;
}

void ConstructTree ( treeNode *node ) {
    treeNode *forFind ;
    bool PopOut = false ;

    forFind = head ;

    while ( !PopOut ) {
        if ( node -> key > forFind -> key ) {
            if ( forFind -> right == NULL ) {
                forFind -> right = node ;
                PopOut = true ;
            }
            else forFind = forFind -> right ;
        }
        else if ( node -> key < forFind -> key ) {
            if ( forFind -> left == NULL ) {
                forFind -> left = node ;
                PopOut = true ;
            }
            else forFind = forFind -> left ;
        }
    }
}

void printTree ( treeNode *startNode ) {
    if ( startNode -> left != NULL ) {
        cout << " " << startNode -> left -> key ;
        printTree ( startNode -> left ) ;
    }

    if ( startNode -> right != NULL ) {
        cout << " " << startNode -> right -> key ;
        printTree ( startNode -> right ) ;
    }
}
