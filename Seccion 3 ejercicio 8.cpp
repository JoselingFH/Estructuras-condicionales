/*8.Escribe un programa que lea de la entrada est�ndar tres n�meros. Despu�s debe leer un cuarto n�mero e 
indicar si el n�mero coincide con algunos de los introducidos con anterioridad.*/

#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3,n4;
	
	cout<<"Ingrese 3 numeros: " ; cin>>n1>>n2>>n3;
	cout<<"Ingrese otro numero: "; cin>>n4;
	
	if((n1==n4) || (n2==n4) || (n3==n4)){          
		cout<<"El cuarto numero coincide con uno de los anteriores";
	}
	else{
		cout<<"El numero no coincide con los anteriores.";
		
	}
	
	
	return 0;
}
