#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Numbers want to enter in the Array: ";
    cin >> n;

    int arr[500];
    cout << "Array Elements as 1: ";
    for(int i=0; i<n; i++){
        arr[i] = 1;
        cout << arr[i] << " ";
    }
}
