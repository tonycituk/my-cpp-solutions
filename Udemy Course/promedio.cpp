#include<iostream>

using namespace std;

int main(){
    float nota1, nota2, nota3, promedio;
    cout<<"Escribe la primera nota: ";
    cin>>nota1;
    cout<<"Escribe la segunda nota: ";
    cin>>nota2;
    cout<<"Escribe la tercera nota: ";
    cin>>nota3;
    promedio = (nota1 + nota2 + nota3)/3;
    cout.precision(5);
    cout<<"El promedio es de: "<<promedio;
    return 0;
}