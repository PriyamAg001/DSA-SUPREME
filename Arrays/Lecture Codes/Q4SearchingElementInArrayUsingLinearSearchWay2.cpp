#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int size = 10;

    cout << "Array: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter element want to search: ";
    int key;
    cin >> key;

    bool flag = 0;
    // 0 -> Not Found;
    // 1 -> Found;

    for(int i=0; i<size; i++){
        if(arr[i] == key){
            // found:
            flag = 1;
            break;
        }
    }

    if(flag){
        cout << key << " is present in the array";
    }
    else{
        cout << key << " is not present in the array";
    }
}