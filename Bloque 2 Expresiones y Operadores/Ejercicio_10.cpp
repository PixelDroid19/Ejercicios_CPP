/*
    Escriba un programa que calcule las soluciones de una ecuación de
    segundo grado de la forma ax^2 + bx + c = 0, teniendo en cuenta la ecuacion cuadratica:
*/
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float a = 0, b = 0, c = 0, x1 = 0, x2 = 0;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;

    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "Las soluciones de la ecuacion son: " << x1 << " y " << x2 << endl;
    system("pause");
    return 0;
}