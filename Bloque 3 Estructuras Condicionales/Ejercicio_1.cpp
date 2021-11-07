/* Escriba un programa que lea dos números y determine cuál de ellos es el mayor */

#include <iostream>

using namespace std;

int main(){
    int num1 = 0, num2 = 0;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << "El numero " << num1 << " es mayor que " << num2 << endl;
    }
    else if (num1 < num2)
    {
        cout << "El numero " << num2 << " es mayor que " << num1 << endl;
    }
    else
    {
        cout << "Los numeros son iguales" << endl;
    }

    return 0;
}