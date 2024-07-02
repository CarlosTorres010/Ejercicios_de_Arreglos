/*
8. 
Comprobar si un número de 10 cifras es capicúa usando un vector.
*/
#include <iostream>
#include <sstream>
using namespace std;

bool esCapicua(long long numero) {
    stringstream ss;
    ss << numero; 
	string numStr = ss.str();  
    int longitud = numStr.length();

    for (int i = 0; i < longitud / 2; ++i) {
        if (numStr[i] != numStr[longitud - 1 - i]) {
            return false; 
        }
    }
	return true; 
}

int main() {
    long long numero;
	cout << "Ingrese un numero de 10 cifras: "; cin >> numero;
	if (esCapicua(numero)) {
        cout << "El numero " << numero << " es capicua." << endl;
    } else {
        cout << "El numero " << numero << " no es capicua." << endl;
    }

    return 0;
}
