/*
18. 
Dada una frase comprobar si el balanceo de los paréntesis es correcto. Es decir, “(ccc(ccc)cc((ccc(c))))” es correcto, pero “)ccc(ccc)cc((ccc(c)))(“ no lo es,
 aunque tenga el mismo número de paréntesis abiertos que cerrados.
*/

#include <iostream>
#include <cstring>
using namespace std;

bool balanceoParentesis(char* frase) {
    int abiertos = 0;
    int cerrados = 0;
    int longitud = strlen(frase);

    for (int i = 0; i < longitud; i++) {
        if (frase[i] == '(') {
            abiertos++;
        } else if (frase[i] == ')') {
            cerrados++;
        }
        
        if (cerrados > abiertos) {
            return false;
        }
    }
	return abiertos == cerrados;
}

int main() {
    char frase[1000];
    cout << "Ingrese una frase con parentesis(obligatorio)): ";
    cin.getline(frase, 1000);
	
	cout<<endl; 
	if (balanceoParentesis(frase)) {
        cout << "Los parentesis estan balanceados correctamente.\n";
    } else {
        cout << "Los parentesis no estan balanceados correctamente.\n";
    }
	return 0;
}
