/*5. Escriba un programa que lea de la entrada estandar un carácter e indique en la 
salida estandar si el carácter es una vocal minúscula o no. */

#include<iostream>
using namespace std;
int main(){
	char vocal;
	
	cout<<"Escriba una vocal: "; cin>>vocal;
	
	switch(vocal){
		case 'a': cout<<"Es una vocal minuscula"; break;
		case 'e': cout<<"Es una vocal minuscula"; break;
		case 'i': cout<<"Es una vocal minuscula"; break;
		case 'o': cout<<"Es una vocal minuscula"; break;
		case 'u': cout<<"Es una vocal minuscula"; break;
		default: cout<<"No es una vocal minuscula"; break;
		
		
	}
		
	return 0;
}

