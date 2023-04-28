#include <bits/stdc++.h>
using namespace std;
bool EsMultiplode3 (int n){
	int x;
	if (n%3==0){
		x=true;
	}
	else{
		x=false;
	}
   	return x;	
}
int main(){
	
	int n;
		
		cout<<"ingrese un numero"<<endl;
		cin>>n;
		EsMultiplode3(n);
		
		if(EsMultiplode3(n)==false){
			cout<<"NO ES MULTIPLO"<<endl;
		}
		else{
			cout<<"ES MULTIPLO"<<endl;
		}
	return 0;	
}

