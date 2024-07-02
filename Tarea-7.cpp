/*
7.
Inverta un vector.
*/
#include <iostream>
using namespace std; 
int main(){
	int n;
	cout<<"Ingrese la cantidad de numeros: "; cin>>n; 
	
	int numeros1[n], numeros2[n];
	
	for(int i=0; i<n; i++){
	    cout<<"Ingrese el elementos de su arreglo: "; cin>>numeros1[i]; 
	}
	cout<<endl; 
	cout<<"Elementos del vector1: "<<endl;
	for(int i=0; i<n; i++){
	    cout<<"Elemento: "<<numeros1[i]<<endl;
	}
	
	for(int j=0; j<n; j++){
		numeros2[n-1-j]=numeros1[j];
	}
	cout<<endl;
	cout<<"Elementos del vector2: "<<endl;
	for(int i=0; i<n; i++){
	    cout<<"Elemento: "<<numeros2[i]<<endl;
	}
	
	return 0; 
}
