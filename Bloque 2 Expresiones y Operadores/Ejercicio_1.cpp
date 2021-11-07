/*Ejercicio 2: Escribe la siguiente expresión como expresión en C++: (a / b) + 1*/
#include <iostream>
#include <cstdlib> // contiene la funcion system("pause")

using namespace std;

int main(){
	int A = 0, B = 0, Total = 0;

	cout<<"Ingrese el valor de A: ";
		cin>>A;

	cout<<"Ingrese el valor de B: ";
		cin>>B;

		Total = (A/B) + 1;

	cout<<"(A/B) + 1 = " <<Total <<endl;


	system("pause");
	return 0;
}