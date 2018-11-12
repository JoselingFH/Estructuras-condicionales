//Seccion 3 ejercicio 6 con switch

#include<iostream>
using namespace std;
int main(){
	char vocal;
	
	cout<<"Escribe una vocal"; cin>>vocal;
	
	switch(vocal){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"La vocal es minuscula"; break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"\nLa vocal es mayuscula"; break;
		default: cout<<"\nNo es una vocal"; break;	
		
	}
	
	
	
	
}
