#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, resto;

    cin>>n>>m;
    
    if(n % m == 0){
        cout<<n/m;
    }
    else{
        resto = n % m;
        n = n - resto;
        cout<<n/m<<" "<<resto<<"/"<<m;
    }

    return 0;
}