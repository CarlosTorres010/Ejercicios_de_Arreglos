/*
1. Convertir palabras a mayúsculas iniciales: "cáceres patrimonio de la humanidad" ? "Cáceres
Patrimonio De La Humanidad"
*/

#include <iostream>

using namespace std;

void convertirAMayusculasIniciales(char cadena[]) {
    int i = 0;
    if (cadena[i] >= 'a' && cadena[i] <= 'z') {
        cadena[i] = cadena[i] - ('a' - 'A');
    } i++;
	while (cadena[i] != '\0') {
        if (cadena[i] == ' ' && cadena[i + 1] >= 'a' && cadena[i + 1] <= 'z') {
            cadena[i + 1] = cadena[i + 1] - ('a' - 'A');
        }i++;
    }
}
int main() {
    char miarray[] = "caceres patrimonio de la humanidad";
    convertirAMayusculasIniciales(miarray);
    cout << miarray << endl;
    return 0;
}

