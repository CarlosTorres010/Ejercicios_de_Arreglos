/*
17. Escriba una función que dado el nombre completo de una persona y un apellido, compruebe si el apellido 
pertenece a esa persona. 
*/
#include <iostream>
#include <string.h> 
using namespace std;

bool apellidoEnNombre(char nombreCompleto[], char apellido[]) {
    if (strstr(nombreCompleto, apellido) != NULL) {
        return true; 
    }
    return false; 
}

int main() {
    const int MAX_LONGITUD = 1000;
    char nombreCompleto[MAX_LONGITUD];
    char apellido[MAX_LONGITUD];
	cout << "Ingrese el nombre completo: "; cin.getline(nombreCompleto, MAX_LONGITUD);
	cout << "Ingrese el apellido a buscar: "; cin.getline(apellido, MAX_LONGITUD);
    if (apellidoEnNombre(nombreCompleto, apellido)) {
        cout << "El apellido '" << apellido << "' pertenece a '" << nombreCompleto << "'." << endl;
    } else {
        cout << "El apellido '" << apellido << "' No pertenece a '" << nombreCompleto << "'." << endl;
    }

    return 0;
}
