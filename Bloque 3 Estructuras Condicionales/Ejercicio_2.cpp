/*
 Escriba un programa que lea tres números y determine cuál de ellos es el
mayor.*/
#include <iostream>

using namespace std;

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << "El numero mayor es: " << num1 << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "El numero mayor es: " << num2 << endl;
    }
    else if (num3 > num1 && num3 > num2)
    {
        cout << "El numero mayor es: " << num3 << endl;
    }
    else
    {
        cout << "Los numeros ingresados son iguales" << endl;
    }

    system("pause");
    return 0;
}