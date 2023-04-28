#include <bits/stdc++.h>
using namespace std;
 int EstMayor(int a, int b, int c) {
 	int mayor;
 		if((a<b)&&(c<b)){
 			mayor=b;
		 }
	    if((b<a)&&(c<a)){
 			mayor=a;
		 }
		if((a<c)&&(b<c)){
 			mayor=c;
		 }
	return mayor;
 }
int main(){
    int a,b,c;
	
	cout<<"ingrese valor de a"<<endl;
    cin>>a;
	cout<<"ingrese valor de b"<<endl;
	cin>>b;
	cout<<"ingrese valor de c"<<endl;
	cin>>c;
	
	int f=EstMayor(a,b,c);
	cout<<"el valor mayor es :  "<<f<<endl;
	return 0;
	
}
