#include<iostream>

using namespace std;

int main(){
    float practicas, teorica, participacion, notaFinal;
    cout<<"Escribe la nota practicas: ";
    cin>>practicas;
    cout<<"Escribe la nota teorica: ";
    cin>>teorica;
    cout<<"Escribe la nota participacion: ";
    cin>>participacion;
    notaFinal = practicas*.30 + teorica*.60 + participacion*.10;
    cout.precision(5);
    cout<<"La nota final es de: "<<notaFinal;
    return 0;
}