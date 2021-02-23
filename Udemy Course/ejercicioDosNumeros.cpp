#include<iostream>

using namespace std;

int main(){
    int numeroUno, numeroDos, suma, resta, producto;
    float division;
    cout<<"Digita un número\n";
    cin>>numeroUno;
    cout<<"Digita otro número\n";
    cin>>numeroDos;
    suma = numeroUno + numeroDos;
    resta = numeroUno - numeroDos;
    producto = numeroUno * numeroDos;
    division = numeroUno/numeroDos;
    cout<<"La suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"El producto es: "<<producto<<endl;
    cout<<"La division es: "<<division<<endl;
    return 0;
}