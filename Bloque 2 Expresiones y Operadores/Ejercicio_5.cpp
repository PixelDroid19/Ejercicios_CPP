/*Ejercicio 5: Escriba un fragmento de programa que intercambie los valores de dos
variables.*/

#include <iostream>

using namespace std;

int main(){
	int A = 0, B = 0, Cambio = 0;

	cout<<"Ingrese el valor de A: "; cin>>A;
	cout<<"Ingrese el valor de B: "; cin>>B;

	Cambio = B;
	B = A;
	A = Cambio;

	cout<<endl <<"Intercambio: B: " <<B  <<" " <<"A: " <<A  <<endl;
	cout<<"Originar: B: " <<Cambio  <<" " <<"A: " <<B  <<endl;

	system("pause");
	return 0;
}