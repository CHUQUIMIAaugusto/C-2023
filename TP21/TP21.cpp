#include <bits/stdc++.h>
using namespace std;
vector<int>GenerarVector(vector<int>A, int n){	
	int r;
srand(time(NULL));
	
		for(int i=0;i<n;i++){
			r=rand()%30;
			A.push_back(r);
		}
	return A;
}
vector<int>GenerarResultado(vector<int>A){	
int par=0, impar=0;	
vector<int>P;
	for(int i=0;i<A.size();i++){
		if(A[i]%2==0){
			par+=A[i];
		}
		else{
			impar+=A[i];
		}
	}
	P.push_back(par);
	P.push_back(impar);
		return P;
}
void MostrarVector(vector<int>A){
	for(int i=0;i<A.size();i++){
		cout<<A[i]<<"/";
	}
	cout<<endl;
}
int main(){
	
	vector<int>A;
	int n;
	
	cout<<"el tamanio del vector: "<<endl;
	cin>>n;
	
		A=GenerarVector(A,n);
		MostrarVector(A);
		A=GenerarResultado(A);
		MostrarVector(A);
	
	return 0;
}
