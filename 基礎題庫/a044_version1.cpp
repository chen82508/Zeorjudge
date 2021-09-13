#include <iostream>

using namespace std ;

int surface_cut ( int line ) {

	if ( line == 0 ) return 1 ;

	return surface_cut ( line - 1 ) + line ;
}

int space_cut ( int n ) {

	if ( n == 0 ) return 1 ;

	return space_cut ( n - 1 ) + surface_cut ( n - 1 ) ;
}

int main () {

	int cut_n ;

	while ( cin >> cut_n ) {
		cout << space_cut ( cut_n ) << endl ;
	}

	return 0 ;
}

/**
 * �����W�A�۲� n �����u�A�̦h�i���ΥX C ( n + 1, 2 ) + 1 �ӳ���
 * �Ŷ����A�s������ (�� n + 1 ��) ���ΤU�h�A�|�Q�e n �ӥ����e�X n ���u
 * �Y�̦h�i�W�[ n ���u�i���Ϊ��̦h�ϰ��
 * �ҥH�Ŷ����A�۲� n �ӥ����̦h�i���ΥX C ( n + 1, 3 ) + n + 1 �Ӱϰ�
