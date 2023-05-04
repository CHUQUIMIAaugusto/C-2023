#include <bits\stdc++.h>
using namespace std;

string separador(string palabra){	
	char separador=',';
		for(int i=0;i<palabra.size();i++){
		
			cout<<palabra[i]<<separador;
		
		}
	
}
int main(){
	string palabra,p;
		
	cout<<"ingrese una palabra: ";
		getline(cin,palabra);
			
			p=separador(palabra);
	
	cout<<"palabra resultante: "<<p<<endl;
	
	return 0;		
}
