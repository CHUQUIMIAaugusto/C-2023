#include <bits\stdc++.h>
using namespace std;

int contarpalabras(string palabra){
		
	int contador=1;	
		
		for(int i=0;i<palabra.size();i++){
			if(palabra[i]==' '){
				contador++;
			}
		}
	return contador;	
}
int main(){
	string palabra;
	int p;
		
	cout<<"ingrese una frase: ";
		getline(cin,palabra);
			
			p=contarpalabras(palabra);
	
	cout<<"numeros de palabras: "<<p<<endl;
	
	return 0;		
}
