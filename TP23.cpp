#include <bits/stdc++.h>
using namespace std;
 vector<int>div(vector<int>A,int n){	
 	
	 for(int i=1;i<=n;i++){
		if(n%i==0){
			A.push_back(i);
		}
	 }
	return A;
 }
void MostrarVector(vector <int> A){
	for(int i = 0; i < A.size(); i++){
		cout<<A[i]<<"/";
	}
	cout<<endl;
}
int main(){
	
	vector<int>A;
	int n=0;
		cout<<"ingrese el numero"<<endl;
		cin>>n;
			A = div(A,n);
			MostrarVector(A);
	return 0;
}
