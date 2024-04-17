#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements in Array: ";
    cin >> n;

    cout << "Enter Values of Array: ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Original Array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    int start = 0;
    int end = n-1;

    while(start <= end){
        // Step 1:
        swap(arr[start], arr[end]);

        // Step 2:
        start++;

        // Step 3:
        end--;
    }

    cout << "Reverse Array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
