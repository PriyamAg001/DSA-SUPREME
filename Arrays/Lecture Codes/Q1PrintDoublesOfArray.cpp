#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;

    // Array Declaration: Bad Practise
    // int arr[n]; 

    int arr[500];

    // Array Input:
    cout << "Enter Array Elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // Printing the Array:
    cout << "Original Array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    } 

    cout << endl;

    // Printing required Array:
    cout << "Doubles of Array: ";
    for(int i=0; i<n; i++){
        cout << 2 * arr[i] << " ";
    }
}

