#include <bits\stdc++.h>
using namespace std;

string ProcesaPalabra(string palabra){

	palabra.erase(palabra.size()-1);
		
		for(int i=0;i<palabra.size();i++){
			if(palabra[i]=='a'){
				palabra[i]='b';
			}
		}
	return palabra;	
}
int main(){
	string palabra,p;
		
	cout<<"ingrese una frase: ";
		getline(cin,palabra);
			
			p=ProcesaPalabra(palabra);
	
	cout<<"palabra procesada: "<<p<<endl;
	
	return 0;		
}
