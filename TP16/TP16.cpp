#include <bits\stdc++.h>
using namespace std;

string separador(string palabra){	
int contador=0;
char separador='.';
		for(int i=0;i<palabra.size();i++){
			contador++;
			if(contador==4){
				palabra[i]=separador;
				contador=0;
			}

		}	
	return palabra;	
}
int main(){
	string palabra,p;
		
	cout<<"ingrese una cadena de caracteres: ";
		getline(cin,palabra);
			p=separador(palabra);
			
		cout<<"resultado: "<<p<<endl;
	return 0;		
}
