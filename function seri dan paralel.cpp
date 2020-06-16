#include <iostream>
using namespace std;
int hambatan_seri ( int R1, int R2, int R3){
	return R1 + R2 + R3;
}
float hambatan_paralel (float R1, float R2, float R3) {
	return 1/R1 + 1/R2 + 1/R3;
}

int main () {
	cout << " hasil dari hambatan seri adalah " << endl;
	cout << hambatan_seri ( 20, 60, 30) << endl;

	cout << " hasil dari hambatan paralel adalah " << endl;
	cout << hambatan_paralel ( 60, 30, 20) ;
}

