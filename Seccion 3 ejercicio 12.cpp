/*12. Hacer un menú que considere las siguientes opciones:
Caso 1:Cubo de un número.
Caso 2: Numero Par o impar.
Caso 3: Salir.*/

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int operaciones, numero;
	float cubo;
	
	cout<<"\tSeleccione la Operacion que desea realizar: "<<endl;
	cout<<"1.Cubo de un numero."<<endl;
	cout<<"2.Numero Par o Impar"<<endl;
	cout<<"3.Salir"<<endl;
	cout<<"\nOperaciones: "; cin>>operaciones;
	
	switch(operaciones){
		case 1: cout<<"Digite un numero: "; cin>>cubo;
		cubo = pow(cubo,3);
		cout<<"El cubo del numero ingresado es: "<<cubo<<endl; break;
		
		case 2: cout<<"Digite un numero: "; cin>>numero;
			if(numero==0){
				cout<<"El numero es cero.";
			}
			else if(numero%2==0){
			cout<<"El numero es Par";
			}
			else{
			cout<<"El numero es Impar";
			} break;
		
		case 3: break;
		
	}
	

	return 0;
}
