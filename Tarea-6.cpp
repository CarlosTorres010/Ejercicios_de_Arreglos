/*
6. 
Calcular la suma de componentes de índice par e impar en un vector.
*/
#include <iostream>
using namespace std;

void calcularSumaIndicesParImpar(int numeros[], int tamano, int &sumaPar, int &sumaImpar) {
    sumaPar = 0;
    sumaImpar = 0;
	for (int i = 0; i < tamano; i++) {
        if (i % 2 == 0) {
            sumaPar += numeros[i];
        } else {
            sumaImpar += numeros[i];
        }
    }
}

int main() {
    const int TAMANO = 10;
    int numeros[TAMANO];
    cout << "Ingrese " << TAMANO << " numeros:" << endl;
    for (int i = 0; i < TAMANO; i++) {
        cin >> numeros[i];
    }
	int sumaPar, sumaImpar;
    calcularSumaIndicesParImpar(numeros, TAMANO, sumaPar, sumaImpar);
	cout << "Suma de componentes en indices pares: " << sumaPar << endl;
    cout << "Suma de componentes en indices impares: " << sumaImpar << endl;
	return 0;
}

