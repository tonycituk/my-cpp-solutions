#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, triples = 0, x;
    string S = "";

    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(x%3==0){
            S = S + to_string(i+1) + " ";
            triples++;
        }
    }

    if (triples == 0){
        cout<<"No hay triples.";
    }
    else{
        cout<<triples<<"\n";
        cout<<S;
    }
    

    return 0;
}