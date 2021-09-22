/*
	Escribir un programa que de la entrada estándar el precio de un producto y
	muestre en la salida estándar el precio del producto al aplicarle el IVA.
*/

#include <iostream>
#include <cstdlib> // contiene la funcion system("pause")
using namespace std;

int main(){
  	float PorcentajeIVA = 0, precioProducto = 0, Total = 0;
  	float IVA = 0;

  	cout<<"Porcentaje del IVA: ";
  		cin>>PorcentajeIVA;

  	IVA = PorcentajeIVA/100;

  	cout<<"Precio del Producto: ";
  		cin>>precioProducto;

  	Total = precioProducto + (precioProducto * IVA);

  	cout<<Total;

  	system("pause");
	return 0;
}
