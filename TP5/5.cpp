#include <bits\stdc++.h>
using namespace std;
float CalcularFahrenheit(float celciuls){
	float fahrenheit;
	fahrenheit = celciuls * 1.8 + 32;
	return fahrenheit;
}
int main(){
	float celciuls,calculo;
	
		cout<<"ingrese grados celciuls: "<<endl;
		cin>>celciuls;
			calculo=CalcularFahrenheit(celciuls);
		cout<<"conversion a Fahrenheit: "<<calculo<<endl;
		
	return 0;
}
