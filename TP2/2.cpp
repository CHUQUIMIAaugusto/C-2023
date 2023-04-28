#include <bits/stdc++.h>
using namespace std;
float ConvertirPesos(float cantidad){
	float dolar;
	dolar = cantidad * 331.37;
	return dolar;
}
int main(){
	int cantidad;
	
	cout<<"ingrese una cantidad dolares"<<endl;
	cin>>cantidad;
	
	float dolar = ConvertirPesos(cantidad);
	cout<<"el calbio de dolar a peso es : "<<dolar<<endl;
	
	return 0;
	
}
