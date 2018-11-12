//11. Hacer un programa que simule un cajero automático con un saldo inicial de 1000 dólares.

#include<iostream>
using namespace std;
int main (){
	int Saldo_Inicial = 1000,operacion,Retiro,Saldo = 0,Ingreso;
	
	cout<<"\nBanco de Costa Rica"<<endl;
	cout<<"\tBienvenido a su Banco"<<endl;
	cout<<"\nIndica la operacion que desea efectuar:"<<endl;
	cout<<"1.Retiro de Dinero."<<endl;
	cout<<"2.Ingresar Dinero."<<endl;
	cout<<"3.Presione en caso de cancelar operacion."<<endl;
	cout<<"\nOperacion: "; cin>>operacion;
	
	switch(operacion){
		case 1: cout<<"Ingrese la cantidad que desea retirar: "; cin>>Retiro;
		if(Retiro>Saldo_Inicial){
			cout<<"Usted no posee dicha cantidad en su cuenta.";
		}
		else{
			Saldo = Saldo_Inicial - Retiro;
			cout<<"Dinero en cuenta: "<<Saldo<<endl;	
		} break;
		
		case 2: cout<<"Digite cantidad que desea ingresar a su cuenta: ";  cin>>Ingreso;
			Saldo = Saldo_Inicial + Ingreso;
			cout<<"Dinero en cuenta: "<<Saldo<<endl; break;
		
		case 3: break;
		
	}
	
	
	return 0;
}
