#include <bits\stdc++.h>
using namespace std;

string separador(string palabra){	
	char separador='_';
		for(int i=0;i<palabra.size();i++){
		
			if(palabra[i]==' '){
				palabra[i]=separador;
			}

		}	
	return palabra;	
}
int main(){
	string palabra,p;
		
	cout<<"ingrese una frase: ";
		getline(cin,palabra);
			p=separador(palabra);
			
		cout<<"palabra final: "<<p<<endl;
	return 0;		
}
