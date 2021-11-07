/* Escriba un programa que lea de la entrada estándar un carácter e indique
en la salida estándar si el carácter es una vocal minúscula o no.
*/
#include <iostream>
#include <string>

using namespace std;

int main(){

    char c;
    cout << "Ingrese un caracter: ";
    cin >> c;

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        cout << "Es una vocal minuscula" << endl;
    }else{
        cout << "No es una vocal minúscula" << endl;
    }

    system("pause");
    return 0;
}

