#include<iostream>

using namespace std;

int main(){
    int a, b;
    cout<<"Digita el valor de a: ";
    cin>>a;
    cout<<"Digita el valor de b: ";
    cin>>b;
    cout<<"a: "<<a<<"\n";
    cout<<"b: "<<b<<"\n";

    b = a - b;
    a = a - b;
    b = b + a;

    cout<<"a: "<<a<<"\n";
    cout<<"b: "<<b<<"\n";
    return 0;
}