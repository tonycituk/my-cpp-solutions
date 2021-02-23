#include <bits/stdc++.h>
#include <algorithm> 

using namespace std;

int sumarDigitosRecursive(int entero){
    int sumaDigitos = 0;
    int ultimoNumero = entero % 10;
    if(ultimoNumero == entero){
        sumaDigitos = ultimoNumero;
    }
    else{
        sumaDigitos = ultimoNumero + sumarDigitosRecursive(entero/10);
    }
    return sumaDigitos;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int entero = 0;
    cin>>entero;
    int sumaDigitos  = sumarDigitosRecursive(entero);
    cout<<sumaDigitos;
    return 0;
}

