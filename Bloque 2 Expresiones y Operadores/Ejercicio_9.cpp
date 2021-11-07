/*
 Realice un programa que calcule el valor que toma la siguiente función para
 unos valores dados de x e y:
*/
#include <iostream>
#include <math.h>

using namespace std;

float Calculate(float X, float Y){
    float Total = 0;
    Total = sqrt(X) / (pow(Y, 2) - 1);
   
    return Total;
}

int main(){
    float A = 0, B = 0, C = 0;
    cout<<"Valor de X: ";
        cin>>A;
    cout<<"Valor de Y: ";
        cin>>B;

    C = Calculate(A, B);

     cout<<"El resultado es: "<<C <<endl;
    system("pause");
    return 0;
}