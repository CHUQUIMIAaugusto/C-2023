#include<iostream>
#include<cstdlib>
#include<vector>
#include<time.h>
using namespace std;
bool mostrar(vector<int>A){
	for(int i=0;i<=A.size();i++){
		cout<<A[i]<<"/";
	}
}
int main(){
srand(time(NULL));
	int n;
	vector<int>A;
	vector<int>B;
		
		for(int i=0;i<=10;i++){
		 n=1+rand()%(100 + 1 - 1);
			A.push_back(n);
				if(A[i] % 2 ==0){
					B.push_back(A[i]);
				}
		}
		cout<<"A: ";
		mostrar(A);
		cout<<endl;
		cout<<"B: ";
		mostrar(B);
		
	return 0;	
}
