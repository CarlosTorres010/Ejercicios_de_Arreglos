/*
13.
Generar la función mistrcpy(str1,str2) que copia str2 en str1. No usar la funciones de String.h
*/

#include <iostream>
using namespace std;

void mistrcpy(char *str1, const char *str2) {
    int i = 0;
    while (str2[i] != '\0') {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
}

int main() {
    char destino[100]; 
    const char fuente[] = "buenos dias"; 

    mistrcpy(destino, fuente); 

    cout << "Despues de copiar, el destino contiene: " << destino << endl;

    return 0;
}
