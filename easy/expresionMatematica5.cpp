#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float x, y, resultado;
    cout<<"Escribe el valor de x: ";
    cin>>x;
    cout<<"Escribe el valor de y: ";
    cin>>y;
    resultado = sqrt(x) / (pow(y, 2) - 1);
    cout.precision(5);
    cout<<"La resultado es de: "<<resultado;
    return 0;
}