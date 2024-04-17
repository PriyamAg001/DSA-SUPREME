#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the Numbers want to enter in the Array: ";
    cin >> n;

    cout << "Enter the Values: ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int maxNum = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
    }

    cout << "Maximum Element in Array: " << maxNum << endl;
}
