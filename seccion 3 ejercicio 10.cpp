//10. Mostrar los meses del año, pidiéndole al usuario un número entre(1-12), y mostrar el mes al que corresponde.

#include<iostream>
using namespace std;
int main(){
	int meses;
	
	cout<<"Digite un numero entre (1-12): "; cin>>meses;
	
	switch(meses){
		case 1: cout<<"Corresponde al mes de Enero"; break;
		case 2: cout<<"Corresponde al mes de Febrero"; break;
		case 3: cout<<"Corresponde al mes de Marzo"; break;
		case 4: cout<<"Corresponde al mes de Abril"; break;
		case 5: cout<<"Corresponde al mes de Mayo"; break;
		case 6: cout<<"Corresponde al mes de Junio"; break;
		case 7: cout<<"Corresponde al mes de Julio"; break;
		case 8: cout<<"Corresponde al mes de Agosto"; break;
		case 9: cout<<"Corresponde al mes de Septiembre"; break;
		case 10: cout<<"Corresponde al mes de Octube"; break;
		case 11: cout<<"Corresponde al mes de Noviembre"; break;
		case 12: cout<<"Corresponde al mes de Diciembre"; break;
		default: cout<<"El numero que ingreso no corresponde a ningun mes"; break;
	}
	
	return 0;
}
