#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, anterior = 3, siguiente = 5, auxiliar;
    cin>>n;

    if(n < 5){

    }
    else{
       for (int i = 0; i < n; i++)
       {

           for (int j = anterior + 1; j < siguiente & j < n; j++)
            {
                cout<<j<<" ";

            }
            siguiente = siguiente + anterior;
            anterior = siguiente - anterior;
            if(anterior>n){
                break;
            }


       }
       
        
        
    }

    return 0;
}