/*
	Escribe un programa que lea de la entrada estándar dos números y muestre 
	en la salida estándar su suma, resta, multiplicación y división
*/

#include <iostream>
#include <cstdlib> // contiene la funcion system("pause")
#include <locale.h> // Libreria que contiene la funcion setlocale

using namespace std;

int main(){
	int A = 0, B = 0;
	setlocale(LC_ALL, "spanish"); // Uso de la funcion setlocale 

	
	cout<<"Primer numero: ";
		cin>>A;

	cout<<"Segundo numero: ";
		cin>>B;

		cout<<"Suma: " <<A + B 
			<<endl 
			<<"Resta: " << A - B
			<<endl
			<<"Multiplicación: " <<A * B
			<<endl
			<<"División: " <<A / B;

			system("pause");

	return 0;
}
