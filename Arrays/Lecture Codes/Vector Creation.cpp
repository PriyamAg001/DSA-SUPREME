#include <iostream>
#include <vector>
using namespace std;
int main(){
//    vector<int> arr;
//    int ans = (sizeof(arr)/sizeof(int));
//    cout << ans << endl;

    // Create VECTOR:
    vector<int> arr;

    // Insert:
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    // Remove:
    arr.pop_back();

    // Print:
    cout << "Array arr is: ";
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // Create VECTOR:
    vector<int> brr(10);
    cout << "Size of Vector brr: " << brr.size() << endl;
    cout << "Capacity of Vector brr: " << brr.capacity() << endl;
    cout << endl;

    // Create VECTOR:
    vector<int> crr(10, -1);

    // Print:
    cout << "Array crr is: ";
    for(int i=0; i<crr.size(); i++){
        cout << crr[i] << " ";
    }
    cout << endl << endl;

    // Create VECTOR:
    vector<int> drr{10, 20, 30, 40, 50};

    // Print:
    cout << "Array drr is: ";
    for(int i=0; i<drr.size(); i++){
        cout << drr[i] << " ";
    }
    cout << endl << endl;

    // Create VECTOR:
    int n;
    cout << "Enter number of elements in Array err: ";
    cin >> n;
    vector<int> err(n);

    // Print:
    cout << "Array err is: ";
    for(int i=0; i<err.size(); i++){
        cout << err[i] << " ";
    }
    cout << endl << endl;

    // Create VECTOR:
    int m;
    cout << "Enter number of elements in Array frr: ";
    cin >> m;
    vector<int> frr(m);

    // Insert:
    cout << "Enter the values: ";
    for(int i=0; i<m; i++){
        cin >> frr[i];
    }

    // Print:
    cout << "Array err is: ";
    for(int i=0; i<frr.size(); i++){
        cout << frr[i] << " ";
    }
    cout << endl;
    cout << "Vector err is empty or not: " << frr.empty();
    cout << endl;

    return 0;
}
