/*
10. 
Generar 30 números aleatorios entre 100 y 1000 guardarlos en un arreglo y calcular estadísticas de
tendencia central media, mediana y moda.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double SemiSumaMediana(int x, int y) {
    return (x + y) / 2.0;
}

int main() {
    int numeros[30];
    int s = 0;

    srand(time(0));

    cout << "Los numeros aleatorios del arreglo son: " << endl;
    for (int i = 0; i < 30; i++) {
        numeros[i] = 100 + rand() % 901; 
        cout << numeros[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 30; i++) {
        s += numeros[i];
    }
    double media = static_cast<double>(s) / 30.0; 
    cout << "La media aritmetica es: " << media << endl;

    for (int i = 0; i < 30 - 1; i++) {
        for (int j = i + 1; j < 30; j++) {
            if (numeros[i] > numeros[j]) {
                int aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    cout << "El arreglo ordenado ascendentemente para hallar la mediana es: " << endl;
    for (int i = 0; i < 30; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    double mediana;
    if (30 % 2 == 0) { 
        mediana = SemiSumaMediana(numeros[14], numeros[15]);
    } else { 
        mediana = numeros[30 / 2];
    }
    cout << "La mediana es: " << mediana << endl;

    int moda = -1;
    int maxFrecuencia = 0;
    int contadorActual = 1;
    int valorActual = numeros[0];

    for (int i = 1; i < 30; i++) {
        if (numeros[i] == valorActual) {
            contadorActual++;
        } else {
            if (contadorActual > maxFrecuencia) {
                moda = valorActual;
                maxFrecuencia = contadorActual;
            }
            valorActual = numeros[i];
            contadorActual = 1;
        }
    }

    if (contadorActual > maxFrecuencia) {
        moda = valorActual;
        maxFrecuencia = contadorActual;
    }

    if (maxFrecuencia == 1) {
        cout << "No existe moda." << endl;
    } else {
        cout << "La moda es: " << moda << " con una frecuencia de " << maxFrecuencia << " veces." << endl;
    }

    return 0;
}
