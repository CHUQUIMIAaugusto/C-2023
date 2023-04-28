#include <bits\stdc++.h>
using namespace std;
string CalcularDDD(int codigo){
	string destino= "DDD no escontrado";
		if(codigo==61){
			destino="Brasilia";
		}
		if(codigo==71){
			destino="Salvador";
		}
		if(codigo==11){
			destino="Sao Pablo";
		}
		if(codigo==21){
			destino="Rio de Janeiro";
		}
		if(codigo==32){
			destino="Juiz de Fora";
		}
		if(codigo==19){
			destino="Campinas";
		}					
		if(codigo==27){
			destino="Vitoria";
		}	
		if(codigo==31){
			destino="Belo Horizonte";
		}	
	
		
		return destino;	
}
int main(){
	int codigo;
	string final;
	
		cout<<"ingrese su DDD: "<<endl;
		cin>>codigo;
			final=CalcularDDD(codigo);
		cout<<"su destino es: "<<final<<endl;
		
	return 0;
}
