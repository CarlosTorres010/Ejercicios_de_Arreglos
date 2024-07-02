/*
9.
Rotar las componentes de un vector una posición hacia la derecha.
*/
#include <iostream>

using namespace std;
	
int main(){
	
	int numero[] = {1,2,3,4,5,6};
	int ultimo = numero[5];
	cout << "El vector 1 es:" << endl;
	for( int i=0; i < 6; i++){
		cout << numero[i] << " ";
	}
	cout << endl; 
	for (int i=4; i>=0; i--) {
		
		numero[i+1] = numero[i];
	
	}
	numero[0] = ultimo;
	cout << "El  vector 2 sera: " << endl;
	for (int i=0; i<6; i++) {
		cout << numero[i] << " ";
	
	}
	return 0;

}
