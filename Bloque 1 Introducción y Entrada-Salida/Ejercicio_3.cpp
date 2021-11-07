/*

	Ejercicio 3: Realice un programa que lea de la entrada estándar los siguientes datos
	de una persona:
	Edad: dato de tipo entero.
	Sexo: dato de tipo carácter.
	Altura en metros: dato de tipo real.
	Tras leer los datos, el programa debe mostrarlos en la salida estándar

*/

#include <iostream>
#include <string.h>
#include<string>
#include <cstdlib> // contiene la funcion system("pause")

using namespace std;

int main(){
	int Edad = 0; float Altura = 0; char Sexo[8];

	cout<<"Edad: "; 
	 cin>>Edad;

	cout<<"Sexo: ";
		cin>>Sexo;

	cout<<"Altura: "; 
	 cin>>Altura;

	 cout<<endl <<"Edad: " <<Edad <<endl;
	 cout<<"Sexo: " <<Sexo <<endl;
	 cout<<"Altura: " <<Altura <<endl;

	 
	return 0;
}