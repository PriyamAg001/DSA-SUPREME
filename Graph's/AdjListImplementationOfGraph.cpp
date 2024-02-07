#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
using namespace std;

class Graph {
public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool direction){
        // Direction = 0 -> Undirected Graph
        // Dircetion = 1 -> Directed Graph
        // Create an edge from 'u' to 'v'
        adjList[u].push_back(v);
        if(direction == 0){
            // Create an edge from 'v' to 'u'
            adjList[v].push_back(u);
        }
    }

    void printAdjList(){
        for(auto node : adjList){
            cout << node.first <<"-> ";
            for(auto neighbour : node.second){
                cout << neighbour << " , ";
            }
            cout << endl;
        }
    }
};

int main(){

    Graph g;
    // Undirected Graph Edge Input:
    // cout << "Undirected Graph: ";
    // g.addEdge(0, 1, 0);
    // g.addEdge(1, 2, 0);
    // g.addEdge(0, 2, 0);
    // cout << endl;
    // g.printAdjList();

    // cout << endl;

    // Directed Graph Edge Input:
    cout << "Directed Graph: ";
    g.addEdge(0, 1, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(0, 2, 1);
    cout << endl;
    g.printAdjList();
}