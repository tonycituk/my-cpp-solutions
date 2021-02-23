#include<iostream>

using namespace std;

int main(){
    int valor;
    cout<<"dame un entero: ";
    cin>>valor;

    switch (valor)
    {
    case 1:
        cout<<"UNO";
        break;
    case 2:
        cout<<"DOS";
        break;
    case 3:
        cout<<"TRES";
        break;
    case 4:
        cout<<"CUATRO";
        break;
    case 5:
        cout<<"CINCO";
        break;
    
    default:
        cout<<"No lo tenemos en la lista";
        break;
    }
}