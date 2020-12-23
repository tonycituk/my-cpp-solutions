#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size the unsorted array: ";
    cin>>n;
    int array[n];
    for (size_t i = 0; i < n; i++)
    {
        cout<<"Enter the value for position "+ to_string(i)+ ": ";
        cin>>array[i];
    }
    cout<<"Unsorted array: \n";
    for (size_t i = 0; i < n; i++)
    {
        cout<<array[i];
        cout<<"\n";
    }
    //Sort the array
    for(int i = 1; i<=n;i++){
        for(int j = 0; j<n-1;j++){
            //swapping if integer at j+1 position is smaller than the integer at j position
            if (array[j]>array[j+1]) {
                array[j] = array[j] + array[j+1];
                array[j+1] = array[j] - array[j+1];
                array[j] = array[j] - array[j+1];
            }
        }
    }
    cout<<"Sorted array: \n";
    for (size_t i = 0; i < n; i++)
    {
        cout<<array[i];
        cout<<"\n";
    }
    

    return 0;
}