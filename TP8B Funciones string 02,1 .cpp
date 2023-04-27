#include <bits\stdc++.h>
using namespace std;

string ProcesaPalabra(string palabra){
	string procesada;
	procesada = palabra;
	
 	for(int i=0; i< palabra.size(); i++){
 		if(palabra[i] == 'A'){
 			procesada[i] = 'B';
		 }
	}
	procesada.erase(procesada.size() - 1);
	return procesada;
}
int main(){
	string Palabra;
	
	cout<<"ingrese una palabra : ";
	cin>>Palabra;
	
	string Procesada = ProcesaPalabra(Palabra);
	
	cout<<Procesada<<endl;
	
	return 0;
}
