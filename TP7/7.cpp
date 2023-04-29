#include <bits\stdc++.h>
using namespace std;
 int ContarLetra(string f){
 	int cant;
 		for(int i=0;i<f.size();i++){
 			if(f[i]=='a' || f[i]=='e' || f[i]=='i' || f[i]=='o' || f[i]=='u'){
 				cant++;
			 }
		 }
	return cant;	 
 }
 int main(){
 	string f;
	int r;
 		cout<<"ingrese una frase"<<endl;
 		cin>>f;
 			
 			r=ContarLetra(f);
 				
 				cout<<"cantidad de vocales: "<<r<<endl;
 	
 	return 0;
 }
