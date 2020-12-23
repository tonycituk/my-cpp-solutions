#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Dame un número: ";
    cin >> numero;
    if (numero % 2 == 0)
    {
        cout << "El número es par.";
    }
    else
    {
        cout << "El número es impar.";
    }

    return 0;
}