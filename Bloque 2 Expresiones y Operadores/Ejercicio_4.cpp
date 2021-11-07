/*Ejercicio 4: Escribe la siguiente expresión como expresión en C++: A + (B / (C-D))*/
#include <iostream>

using namespace std;
#include <cstdlib> // contiene la funcion system("pause")

int main(){
	float A = 0, B = 0, C = 0, D = 0, Total = 0;

	cout<<"Ingrese el valor de A: "; cin>>A;
	cout<<"Ingrese el valor de B: "; cin>>B;
	cout<<"Ingrese el valor de C: "; cin>>C;
	cout<<"Ingrese el valor de D: "; cin>>D;

	Total = A + (B / (C-D));

	cout<<"A + (B / (C-D)) = " <<Total <<endl;

	system("pause");
	return 0;
}