//4.Comprobar si un numero digitado por el usuario es positivo o negativo.

#include<iostream>
using namespace std;
int main(){
	int n;
	
	cout<<"Ingresa un numero: "; cin>>n;
	
	if(n==0){
		cout<<"El numero "<<n<<" es nulo";
	}
	else if(n>0){
		cout<<"El numero "<<n<<" es positivo";
	}
	else{
		cout<<"El numero "<<n<<" es negativo";
	}

	return 0;
}
