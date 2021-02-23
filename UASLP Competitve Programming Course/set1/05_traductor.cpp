#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int d, w;
    vector<int> numiricos;
    vector<int> enterales;
    vector<int>::iterator it;
    cin>>d>>w;

    for (int i = 0; i < d; i++)
    {   int numirico, enteral;
        cin >> numirico >> enteral;
        numiricos.push_back(numirico);
        enterales.push_back(enteral);
    }

    for (int i = 0; i < w; i++)
    {
        int input;
        cin >> input;
        it = find (numiricos.begin(), numiricos.end(), input);
        if (it != numiricos.end())
        {
            cout << enterales[it - numiricos.begin()] << "\n";
        }
        else
        {
            cout << "C?\n";
        }       
    }
    return 0;
}
