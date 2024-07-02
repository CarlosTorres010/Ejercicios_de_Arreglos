/*
11. 
Calcular la suma de elementos positivos y negativos en un arreglo.
*/
#include <iostream>
using namespace std;
int main() {
    int n;
	cout << "Ingrese el numero de elementos: "; cin >> n;
	if (n <= 0) {
        cout << "El numero de elementos debe ser positivo." << endl;
        return 1;
    }
	int arreglo[n];
	cout << "Ingrese los " << n << " numeros del arreglo:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Elemento " << i + 1 << ": "; cin >> arreglo[i];
    }
	int sumaPositivos = 0;
    int sumaNegativos = 0;
	for (int i = 0; i < n; ++i) {
        if (arreglo[i] > 0) {
            sumaPositivos += arreglo[i];
        } else if (arreglo[i] < 0) {
            sumaNegativos += arreglo[i];
        }
    }
	cout << "\nLa suma de elementos positivos es: " << sumaPositivos << endl;
    cout << "La suma de elementos negativos es: " << sumaNegativos << endl;
	return 0;
}

