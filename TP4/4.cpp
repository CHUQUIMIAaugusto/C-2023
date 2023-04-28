#include <bits\stdc++.h>
using namespace std;
float CalcularSalario(float salario){
	float aumento;
		if(salario<=400){
		aumento=salario*0.15;
		salario=salario+aumento;
		
		}
		if(salario<=800 && salario>=400.01){
		aumento=salario*0.12;
		salario=salario+aumento;
		
		}
		if(salario<=1200 && salario>=800.01){
		aumento=salario*0.10;
		salario=salario+aumento;
		
		}	
		if(salario<=2000 && salario>=1200.01){
		aumento=salario*0.07;
		salario=salario+aumento;
		
		}
		if(salario>2000){
		aumento=salario*0.04;
		salario=salario+aumento;
		
		}
	return salario;					
}
int main(){
	float salario,resultado;
	
		cout<<"ingrese su salario: "<<endl;
		cin>>salario;
			resultado=CalcularSalario(salario);
		cout<<"nuevo salario: "<<resultado<<endl;
		cout<<endl;
	return 0;
}
