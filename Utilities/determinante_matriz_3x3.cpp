#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int matrixSize = 3;

    float matrix[matrixSize][matrixSize], matrixUtil[matrixSize][matrixSize + matrixSize - 1];

    for (int i = 0; i < matrixSize; i++)
    {
        for (int j = 0; j < matrixSize; j++)
        {
            float input = 0;
            cin >> input;
            matrix[i][j] = input;
            matrixUtil[i][j] = input;
        }
    }
    for (int i = 0; i < matrixSize; i++)
    {
        for (int j = 0; j < matrixSize; j++)
        {
            //cout << matrix[i][j] << " ";
        }
        //cout << endl;
    }
    for (int i = 0; i < matrixSize; i++)
    {
        for (int j = matrixSize; j < matrixSize + matrixSize - 1; j++)
        {
            matrixUtil[i][j] = matrix[i][j - matrixSize];
        }
    }

    for (int i = 0; i < matrixSize; i++)
    {
        for (int j = 0; j < matrixSize + matrixSize - 1; j++)
        {
            //cout << matrixUtil[i][j] << " ";
        }
        //cout << endl;
    }

    //Positive part
    int positiveTotal = 0;
    for (int j = 0; j < matrixSize; j++)
    {
        int positivePartial = 1;
        //cout<<positivePartial<<" should be 1 \n";
        for (int i = 0; i < matrixSize; i++)
        {
            positivePartial *= matrixUtil[i][j + i];
            //cout<<matrixUtil[i][j + i]<<endl;
        }
        positiveTotal += positivePartial;
    }

    //cout<<positiveTotal<<endl<<endl;


    int negativeTotal = 0;
    for (int j = 0; j < matrixSize; j++)
    {
        int negativePartial = 1;
        //cout<<negativePartial<<" should be 1 \n";
        for (int i = 0; i < matrixSize; i++)
        {
            negativePartial *= matrixUtil[matrixSize - i - 1][j + i];
            //cout<<matrixUtil[matrixSize - i - 1][j + i]<<endl;
        }
        negativeTotal += negativePartial;
    }

    //cout<<negativeTotal;

    float determinante = positiveTotal - negativeTotal;
    cout<<determinante;


    return 0;
}