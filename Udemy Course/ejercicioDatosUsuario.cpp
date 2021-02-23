#include<iostream>

using namespace std;

int main(){
    int edad;
    char sexo[10];
    float altura;
    cout<<"¿Cuál es tu edad?\n";
    cin>>edad;
    cout<<"¿Cuál es tu sexo?\n";
    cin>>sexo;
    cout<<"¿Cuál es tu altura en metros?\n";
    cin>>altura;
    cout<<"Tu edad es: "<<edad<<endl;
    cout<<"Tu sexo es: "<<sexo<<endl;
    cout<<"Tu altura es: "<<altura<<endl;

    return 0;
}