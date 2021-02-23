#include<iostream>

using namespace std;

int main(){

    float n1, n2;
    cout<<"Digite el 1er número: ";
    cin>>n1;
    cout<<"Digite el 2do número: ";
    cin>>n2;
    if(n1==n2){
        cout<<"Los números son iguales.";
    }
    else if(n1>n2){
        cout<<n1<<" es mayor que "<<n2<<".";

    }
    else{
        cout<<n2<<" es mayor que "<<n1<<".";

    }

    return 0;
}