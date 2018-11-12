/*7.Escriba un programa que solicite una edad(un entero) e indique en la salida estándar
si la edad introducida está en el rango [18-25]. */

#include<iostream>
using namespace std;
int main(){
	int edad;
	
	cout<<"Ingrese la edad: "; cin>>edad;
	
	switch(edad){
		case 18: cout<<"La edad se encuentra en el rango de [18-25]"; break;
		case 19: cout<<"La edad se encuentra en el rango de [18-25]"; break;
		case 20: cout<<"La edad se encuentra en el rango de [18-25]"; break;
		case 21: cout<<"La edad se encuentra en el rango de [18-25]"; break;
		case 22: cout<<"La edad se encuentra en el rango de [18-25]"; break;
		case 23: cout<<"La edad se encuentra en el rango de [18-25]"; break;
		case 24: cout<<"La edad se encuentra en el rango de [18-25]"; break;
		case 25: cout<<"La edad se encuentra en el rango de [18-25]"; break;
		default: cout<<"La edad introducida no se encuentra en el rango"; break;
					
	}
	
	
	return 0;
}
