/* Realice un programa que lea un valor entero y determine si se trata de un número par o impar.*/
#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0){
        cout << "el numero es par";
    }
    else{
        cout << "el numero es impar";
    }

    system("pause");
    return 0;
}