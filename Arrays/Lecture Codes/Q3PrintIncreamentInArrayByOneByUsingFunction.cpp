#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


void inc(int arr[], int size){
    cout << "Incremented Array: ";
    arr[0] = arr[0] + 1;
    arr[1] += 1;
    printArray(arr, size);
}

int main(){
    int arr[] = {5, 6};
    int size = 2;

    cout << "Original Array: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    inc(arr, size);
    cout << "Incremented Array (Pass by Refrence): ";
    printArray(arr, size);
}