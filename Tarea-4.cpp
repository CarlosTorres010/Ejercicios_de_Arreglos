/*
4.
Leer una secuencia de nombres, ordenarlos alfab�ticamente y presentarlos.
*/
#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>

using namespace std;

int main() {
    vector<string> nombres;
    string nombre;
    cout << "Ingrese una secuencia de nombres (presione Enter despu�s de cada nombre, y escriba 'fin' para terminar):\n";
    while (true) {
        cout << "Nombre: ";
        getline(cin, nombre);
        if (nombre == "fin") {
            break;
        }
        nombres.push_back(nombre);
    }
    sort(nombres.begin(), nombres.end());
    cout << "\nNombres ordenados alfab�ticamente:\n";
    for (size_t i = 0; i < nombres.size(); ++i) {
        cout << nombres[i] << endl;
    }

    return 0;
}
