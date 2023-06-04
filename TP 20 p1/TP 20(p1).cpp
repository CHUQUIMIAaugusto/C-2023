#include<bits/stdc++.h>
using namespace std;
vector<int>generarvector(vector<int>A){
	srand(time(NULL));	
int n;		
	for(int i=0;i<100;i++){
	 n=1+rand()%(150 + 1 - 1);
			A.push_back(n);
				
	}
	return A;
}
void mostrar(vector<int>A){
	for(int i=0;i<A.size();i++){
		if(A[i]%2==0){
			cout<<A[i]<<"/";
		}
	}
	cout<<endl;
}
int ContarMultiplosdeDos(vector<int>A){
	int contador;
	for(int i=0;i<=A.size();i++){
		if(A[i]%2==0){
			contador++;
		}
	}
	return contador;
}
int main(){
vector<int>A;
	int r;
			A=generarvector(A);
			mostrar(A);
			r=ContarMultiplosdeDos(A);
		cout<<"Numeros multiplos de 2: "<<r;
		
	return 0;	
}
