#include <bits\stdc++.h>
using namespace std;
 int valorletra(string f){
 	int cantidad;
 		for(int i=0;i<f.size();i++){
 			if(f[i]=='a' || f[i]=='e'){
 				cantidad=cantidad+1;
			 }
			if(f[i]=='o' || f[i]=='s'){
 				cantidad=cantidad+2;
			 }
			if(f[i]=='d' || f[i]=='i' || f[i]=='n' || f[i]=='r'){
 				cantidad=cantidad+3;
			 }
			if(f[i]=='c' || f[i]=='l' || f[i]=='t' || f[i]=='u'){
 				cantidad=cantidad+4;
			 }  
			if(f[i]=='m' || f[i]=='p'){
 				cantidad=cantidad+5;
			 }
			if(f[i]=='b' || f[i]=='f' || f[i]=='g' || f[i]=='h'|| f[i]=='j' || f[i]=='q' || f[i]=='v' || f[i]=='x' || f[i]=='y' || f[i]=='z'){
 				cantidad=cantidad+6;
			 }
			if(f[i]=='k' || f[i]=='w'){
 				cantidad=cantidad+7;
			 }	     
		 }
	return cantidad;	 
 }
 int main(){
 	string f;
	int r;
 		cout<<"ingrese una frase"<<endl;
 		getline(cin,f);
 			
 			r=valorletra(f);
 				
 				cout<<"valor de palabra: "<<r<<endl;
 	
 	return 0;
 }
