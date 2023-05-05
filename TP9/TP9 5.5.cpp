#include <bits\stdc++.h>
using namespace std;

int dictado(string palabra){	
int contador;
	
	contador=palabra.size()-1;	
	return contador;	
}
int main(){
	string palabra;
		int p;
	cout<<"ingrese una palabra: ";
		getline(cin,palabra);
			p=dictado(palabra);
			
		cout<<"contador: "<<p<<endl;
	return 0;		
}
