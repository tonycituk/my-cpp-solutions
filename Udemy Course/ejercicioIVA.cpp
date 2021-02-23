#include<iostream>

using namespace std;

int main(){
    float iva;
    float precio;
    cout<<"Escribe el precio del producto\n";
    cin>>precio;
    iva = precio * .16;
    precio = precio + iva;
    cout<<"El precio total es de: "<<precio;
    return 0;
}