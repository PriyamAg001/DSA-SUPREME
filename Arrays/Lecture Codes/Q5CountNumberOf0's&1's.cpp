#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,0,1,0,1,0,1};
    int size = 7;

    int numZero = 0;
    int numOne = 0;

    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            numZero++;
        }
        if(arr[i]  == 1){
            numOne++;
        }
    }

    cout << "Number of Zero's: " << numZero << endl;
    cout << "Number of One's: " << numOne << endl;
}
