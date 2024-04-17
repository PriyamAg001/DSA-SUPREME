#include <iostream>
#include <vector>
using namespace std;

// Union of 2 Arrays;

int main(){
    int arr[] = {1,3,5,7,9};
    int sizeA = 5;

    int brr[] = {0,2,4,6,8,10};
    int sizeB = 6;

    vector<int> ans;
    // Push back all elements of arr into vector ans:
    for(int i=0; i<sizeA; i++){
        ans.push_back(arr[i]);
    }

    // Push back all elements of brr into vector ans:
    for(int i=0; i<sizeB; i++){
        ans.push_back(brr[i]);
    }

    // Print:
    cout <<"Union of 2 Arrays: ";
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " " ;
    }
}
