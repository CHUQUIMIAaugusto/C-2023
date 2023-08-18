#include <bits/stdc++.h>
using namespace std;

class CNumber{
	
	private:
		int Numero1;
		int Numero2;
		int Numero3;
		
	public:
		CNumber(int N1, int N2, int N3);
		int SetN1(int N1);
		int SetN2(int N2);
		int SetN3(int N3);
		int Max(int N1, int N2, int N3);
		int Min(int N1, int N2, int N3);
		float Prom(int N1, int N2, int N3);
		int Pares(int N1, int N2, int N3);
		int Impares(int N1, int N2, int N3);
};

CNumber::CNumber(int N1, int N2, int N3){
	Numero1 = SetN1(N1);
	Numero2 = SetN2(N2);
	Numero3 = SetN3(N3);
}

int CNumber::SetN1(int N1){
	Numero1 = N1;
	return Numero1;
}

int CNumber::SetN2(int N2){
	Numero2 = N2;
	return Numero2;
}

int CNumber::SetN3(int N3){
	Numero3 = N3;
	return Numero3;
}

int CNumber::Max(int N1, int N2, int N3){
	int max = N1;
	
	if(N2 > N1 && N2 > N3){
		max = N2;
	}
	
	if(N3 > N2 && N3 > N1){
		max = N3;
	}
	
	return max;
}

int CNumber::Min(int N1, int N2, int N3){
	int min = N1;
	
	if(N2 < N1 && N2 < N3){
		min = N2;
	}
	
	if(N3 < N2 && N3 < N1){
		min = N3;
	}
	
	return min;
}

float CNumber::Prom(int N1, int N2, int N3){
	
	return ((float) (N1 + N2 + N3) / 3);
}

int CNumber::Pares(int N1, int N2, int N3){
	
	int cont = 0;
	if(N1 % 2 == 0){
		cont++;
	}
	if(N2 % 2 == 0){
		cont++;
	}
	if(N3 % 2 == 0){
		cont++;
	}
	return cont;
}

int CNumber::Impares(int N1, int N2, int N3){
	
	int cont = 0;
	if(N1 % 2 != 0){
		cont++;
	}
	if(N2 % 2 != 0){
		cont++;
	}
	if(N3 % 2 != 0){
		cont++;
	}
	return cont;
}

int main(){
	
	int num1, num2, num3;
	
	cout<<"ingrese 3 numeros, separados por un espacio"<<endl;
	cin>>num1>>num2>>num3;
	
	CNumber Numeros(num1, num2, num3);
	
	int maximo = Numeros.Max(num1, num2, num3);
	cout<<"El numero maximo es: "<<maximo<<endl;
	
	int minimo = Numeros.Min(num1, num2, num3);
	cout<<"El numero minimos es: "<<minimo<<endl;

	float promedio = Numeros.Prom(num1, num2, num3);
	cout<<"El promedio de los 3 numeros es: "<<promedio<<endl;
	
	int pares = Numeros.Pares(num1, num2, num3);
	cout<<"La cantidad de numeros pares es: "<<pares<<endl;
	
	int impares = Numeros.Impares(num1, num2, num3);
	cout<<"La cantidad de numeros impares es: "<<impares<<endl;
	
	return 0;
}
