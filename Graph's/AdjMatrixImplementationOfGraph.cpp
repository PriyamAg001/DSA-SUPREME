#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter Number of Nodes: ";
    cin >> n;

    vector<vector<int>> adjMatrix(n, vector<int>(n, 0));

    int e;
    cout << "Enter Number of Edges: ";
    cin >> e;

    for(int i=0; i<e; i++){
        cout << "Enter the value of 'u' & 'v': ";
        int u;
        int v;
        cin >> u >> v;
        
        // Mark 1:
        adjMatrix[u][v] = 1;
    }

    // Printing Adjacency Matrix:
    cout << "Graph: " << endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}