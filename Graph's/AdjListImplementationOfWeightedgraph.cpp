#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
using namespace std;

class Graph{
public:
    unordered_map<int, list<pair<int, int>>> adjList;

    void addEdge(int u, int v, int weight, bool direction){
        // Direction = 0 -> Undirected Graph
        // Dircetion = 1 -> Directed Graph
        // Create an edge from 'u' to 'v'
        adjList[u].push_back({v, weight});      
        if(direction == 0){
            // Create an edge from 'v' to 'u'
            adjList[v].push_back({u, weight}); 
        }  
    }

    void printAdjList(){
        for(auto node : adjList){
            cout << node.first << "-> ";
            for(auto neighbour : node.second){
                cout << "(" << neighbour.first << ", " << neighbour.second << ")" << " , ";
            }
            cout << endl;
        }   
    }
};

int main(){
    Graph g;
    // Directed Graph Edge Input:
    cout << "Directed Graph: ";
    g.addEdge(0, 1, 5, 1); // Changed 3 to 1
    g.addEdge(1, 2, 8, 1); // Changed 4 to 1
    g.addEdge(0, 2, 6, 1); // Changed 5 to 1
    cout << endl;
    g.printAdjList();
}
