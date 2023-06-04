#include<bits/stdc++.h>
using namespace std;
vector<int>generarvector(vector<int>A){
	srand(time(NULL));	
int n;		
	for(int i=0;i<10;i++){
	 n=1+rand()%(100 + 1 - 1);
			A.push_back(n);
				
	}
	return A;
}
vector<int>multiplos(vector<int>A, vector<int>B){
	int e;
	for(int i=0;i<10;i++){
		if(A[i]%2==0){
			e=A[i]	;
			B.push_back(e);
		}
	}
	return B;
}
void mostrar(vector<int>A){
	for(int i=0;i<A.size();i++){
		cout<<A[i]<<"/";
	}
	cout<<endl;
}
int main(){
	vector<int>A;
	vector<int>B;
	vector<int>C;
	A=generarvector(A);
	B=multiplos(A,B);
	cout<<"A: ";
	mostrar(A);
	cout<<"B: ";
	mostrar(B);
	return 0;	
}
