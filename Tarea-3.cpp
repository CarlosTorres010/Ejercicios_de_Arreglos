/*
3.
Contar la ocurrencia de una letra específica en una cadena de entrada.
*/
#include <iostream>
#include <string.h> 
using namespace std;

int contarOcurrencias(char cadena[], char letra) {
    int longitud = strlen(cadena);
    int contador = 0;
    for (int i = 0; i < longitud; ++i) {
        if (cadena[i] == letra) {
            contador++; 
        }
    }
	return contador;
}

int main() {
    const int MAX_LONGITUD = 1000;
    char cadena[MAX_LONGITUD];
    char letra;
	cout << "Ingrese una cadena de texto: "; cin.getline(cadena, MAX_LONGITUD);
	cout << "Ingrese la letra a buscar: "; cin >> letra;
	int ocurrencias = contarOcurrencias(cadena, letra);
	cout << "La letra '" << letra << "' aparece " << ocurrencias << " veces en la cadena." << endl;
	
	return 0;
}

