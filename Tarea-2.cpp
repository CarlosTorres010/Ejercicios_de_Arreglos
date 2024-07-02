/*
2. 
Programa que haga "eco" de la entrada, poniendo cada palabra en una línea separada.
*/
#include <iostream>
using namespace std;

void ecoPalabras(char texto[]) {
    int inicio = 0; 
	int longitud = 0;
    for (int i = 0; texto[i] != '\0'; ++i) {
        if (texto[i] == ' ' || texto[i] == '\n' || texto[i] == '\t' || texto[i] == '\r' || texto[i] == '\f' || texto[i] == '\v') {
            if (longitud > 0) {
                texto[i] = '\0'; 
                cout << &texto[inicio] << endl; 
                longitud = 0; 
            }
        } else {
            if (longitud == 0) {
                inicio = i; 
            }
            longitud++; 
        }
    }
    if (longitud > 0) {
        cout << &texto[inicio] << endl;
    }
}

int main() {
    const int MAX_LONGITUD = 1000;
    char texto[MAX_LONGITUD];
	cout << "Ingrese un texto: "; cin.getline(texto, MAX_LONGITUD);
	cout << "\nPalabras separadas:\n"; ecoPalabras(texto);
	return 0;
}
