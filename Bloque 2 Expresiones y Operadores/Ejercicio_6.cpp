/*Ejercicio 6: Escriba un programa que lea las tres notas de un alumno y calcule la nota
final media de dicho alumno.*/
#include <iostream>

using namespace std;

int main(){
    float nota1, nota2, nota3, notaFinal;
    cout << "Ingrese la nota 1: ";
    cin >> nota1;
    cout << "Ingrese la nota 2: ";
    cin >> nota2;
    cout << "Ingrese la nota 3: ";
    cin >> nota3;
    notaFinal = (nota1 + nota2 + nota3) / 3;
    cout << "La nota final es: " << notaFinal << endl;
    system("pause");
    return 0;
}