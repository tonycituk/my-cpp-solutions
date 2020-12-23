#include <iostream>

using namespace std;

int main()
{
    int numero, dato = 5;
    cout << "Dame un número: ";
    cin >> numero;

    if (numero == dato)
    {
        cout << "haz acertado.";
    }
    else
    {
        cout << "Fallaste.\n";
        if (numero > dato)
        {
            cout << "Tu número es mayor.";
        }
        else
        {
            cout << "Tu número es menor.";
        }
    }

    return 0;
}