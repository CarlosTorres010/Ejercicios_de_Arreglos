/*
15. 
Generar la función mistrcmp(str1,str2) que compara dos cadenas y retorna los resultados 0 si las
cadenas son iguales, 1 si la cadena str1 >str2, -1 si la cadena str2>str1. No usar las funciones de
String.h 
*/
#include <iostream>
using namespace std;

int mistrcmp( const char* str1,  const char* str2) {
    int i = 0;
    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0') {
        i++;
    }
	if (str1[i] == str2[i]) {
        return 0; 
    } else if (str1[i] > str2[i]) {
        return 1; 
    } else {
        return -1; 
    }
}
int main() {
    const char* cadena1 = "Hola";
    const char* cadena2 = "Hola";
    int resultado = mistrcmp(cadena1, cadena2);
    if (resultado == 0) {
        cout << "Las cadenas son iguales." << endl;
    } else if (resultado == 1) {
        cout << "La cadena 1 es mayor que la cadena 2." << endl;
    } else {
        cout << "La cadena 2 es mayor que la cadena 1." << endl;
    }
	return 0;
}

