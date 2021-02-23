#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float catetoA, catetoB, hipotenusa;
    cout<<"Escribe catetoA: ";
    cin>>catetoA;
    cout<<"Escribe catetoB: ";
    cin>>catetoB;
    hipotenusa = sqrt(pow(catetoA, 2)+pow(catetoB, 2));
    cout.precision(5);
    cout<<"La hipotenusa es de: "<<hipotenusa;
    return 0;
}