#include <bits/stdc++.h>
using namespace std;
vector<int>GenerarVector(vector<int>A, int n){	
 int r=0;
srand(time(NULL));	
	for(int i=0;i<n;i++){
		r=rand()%30;
		A.push_back(r);
	}
		
	return A;
}
void MostrarVector(vector<int>A){
	for(int i=0;i<A.size();i++){
		cout<<A[i]<<"/";
	}
	cout<<endl;
}

vector<int>GenerarAcumulativo(vector<int>A){
vector<int>B;
		int acumular=0;
	for(int i=0;i<A.size();i++){
		acumular+=A[i];
		B.push_back(acumular);	
	}
	return B;
}
int main(){	
vector<int>A;
vector<int>B;
	int n;	
		cout<<"ingrese el tamanio del vector"<<endl;
		cin>>n;	
	A=GenerarVector(A,n);
	B=GenerarAcumulativo(A);
		
		MostrarVector(A);
		MostrarVector(B);	
	
	return 0;
}
