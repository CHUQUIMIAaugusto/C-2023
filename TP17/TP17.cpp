#include<bits/stdc++.h>
using namespace std;
int calcularfactorial(int n){
	float resultado=1;
		
		for(int i=1;i<=n;i++){
			resultado*=i;
		}
	return resultado;	
}
int main(){
	int n,r;
		
		cout<<"ingrese un numero"<<endl;
		cin>>n;
			
			r=calcularfactorial(n);
				cout<<"Factorial: "<<r<<endl;
	
	return 0;
}
