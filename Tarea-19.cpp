/*
19. 
Escribir un programa que dada una frase, determine si es un pal�ndromo o no. Un pal�ndromo es una
frase que, atendiendo s�lo a sus letras e ignorando los espacios, acentos, signos de puntuaci�n y tipo
de letra (may�scula o min�scula) expresa lo mismo le�da de izquierda a derecha que de derecha a
izquierda. �d�bale arroz a la zorra el abad�.
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype> 
using namespace std;

string limpiarCadena(const string &cadena) {
    string resultado;
    for (size_t i = 0; i < cadena.size(); ++i) {
        if (isalpha(cadena[i])) {
            resultado += tolower(cadena[i]);
        }
    }
    return resultado;
}

bool esPalindromo(const string &cadena) {
    string limpia = limpiarCadena(cadena);
    string invertida = limpia;
    reverse(invertida.begin(), invertida.end());
    return limpia == invertida;
}

int main() {
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    if (esPalindromo(frase)) {
        cout << "La frase es un palindromo." << endl;
    } else {
        cout << "La frase NO es un palindromo." << endl;
    }

    return 0;
}
