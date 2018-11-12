/*6.Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el caracter
es una vocal minuscula, es una vocal mayuscula o no es una vocal. */

#include<iostream>
using namespace std;
int main(){
	char vocal;
	
	cout<<"Escribe una vocal: "; cin>>vocal;
	
	if(vocal >='a' && vocal <= 'z'){
		cout<<"La vocal es minuscula";
	}
	else if(vocal >='A' && vocal <= 'Z'){
		cout<<"La vocal es mayuscula";
	}
	else{
		cout<<"No es una vocal";
	}
	
	return 0;
}
