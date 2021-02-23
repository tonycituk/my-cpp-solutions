#include<iostream>

using namespace std;

int main(){
    float a, b, c, d, e, f, resultado;
    cout<<"Digita el valor de a: ";
    cin>>a;
    cout<<"Digita el valor de b: ";
    cin>>b;
    cout<<"Digita el valor de c: ";
    cin>>c;
    cout<<"Digita el valor de d: ";
    cin>>d;
    cout<<"Digita el valor de e: ";
    cin>>e;
    cout<<"Digita el valor de f: ";
    cin>>f;
    resultado = (a+(b/c))/(d+(e/f));
    cout.precision(5);
    cout<<"El resultado es = "<<resultado;
    return 0;
}