#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    cout << "Enter Array Size: ";
    int n;
    cin >> n;

    int arr[n];
    cout << "Enter Array Elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int minNum = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i] < minNum){
            minNum = arr[i];
        }
    }

    cout << "Minumum Element in Array: " << minNum << endl;
}