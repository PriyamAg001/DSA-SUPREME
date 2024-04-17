#include <iostream>
#include <vector>
using namespace std;

// Intersection of 2 Arrays;

int main(){
    vector<int> arr{1,3,5,7,3,9};
    vector<int> brr{0,2,3,3,7,9,1};

    vector<int> ans;
    // Push back all elements of arr into vector ans:
    for(int i=0; i<arr.size(); i++){
        int element = arr[i];
        for(int j=0; j<brr.size(); j++){
            if(element == brr[j]){
                ans.push_back(element);
                break;
            }
        }
    }

    // Print:
    cout <<"Intersection of 2 Arrays: ";
    for(auto value: ans){
        cout << value << " " ;
    }
}
