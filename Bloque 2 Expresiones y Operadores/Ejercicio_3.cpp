/*Ejercicio 3: Escribe la siguiente expresión como expresión en C++: (A + (B / C)) / (D + (E / F))*/
#include <iostream>

using namespace std;
#include <cstdlib> // contiene la funcion system("pause")

int main(){
		float A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, Total = 0;

	cout<<"Ingrese el valor de A: "; cin>>A;
	cout<<"Ingrese el valor de B: "; cin>>B;
	cout<<"Ingrese el valor de C: "; cin>>C;
	cout<<"Ingrese el valor de D: "; cin>>D;
	cout<<"Ingrese el valor de E: "; cin>>E;
	cout<<"Ingrese el valor de F: "; cin>>F;

	Total = (A + (B / C)) / (D + (E / F));

	cout<<"(A + (B / C)) / (D + (E / F)) = " <<Total <<endl;

	system("pause");
	return 0;
}