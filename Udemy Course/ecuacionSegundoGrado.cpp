#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float a, b, c, x1, x2;
    cout<<"Escribe valor de a: ";
    cin>>a;
    cout<<"Escribe valor de b: ";
    cin>>b;
    cout<<"Escribe valor de c: ";
    cin>>c;
    x1 = ((-1*b) + sqrt(pow(b, 2) - 4 * a * c))/(2*a);
    x2 = ((-1*b) - sqrt(pow(b, 2) - 4 * a * c))/(2*a);
    cout.precision(8);
    cout<<"El valor de x1 = "<<x1<<"\n";
    cout<<"El valor de x2 = "<<x2<<"\n";

    return 0;
}