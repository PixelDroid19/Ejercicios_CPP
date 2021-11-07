/*Comprobar si un número digitado por el usuario es positivo o negativo*/
#include <iostream>
using namespace std;

//Inicializacion de funciones
void Comprobar(int numero);

int main(){   
    int numero;
    cout<<"Ingrese un numero: ";
    cin>>numero;

    Comprobar(numero);

    system("pause");
    return 0;
}

void Comprobar(int numero)
{
    if (numero > 0){
        cout <<endl <<"El numero es positivo";
    }
    else if (numero < 0){
        cout <<endl << "El numero es negativo";
    }
    else{
        cout <<endl << "El numero es cero";
    }
}