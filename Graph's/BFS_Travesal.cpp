#include <iostream>
#include <list>
#include <queue>
#include <unordered_map>
using namespace std;

class Graph{
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
            cout << node.first << "-> ";
            for(auto neighbour : node.second){
                cout << neighbour << " ";
            }
            cout << endl;
        }
    }

    void bfs(int src,  unordered_map<int, bool>& visited){
        queue<int> q;      
        q.push(src);
        visited[src] = true;

        while(!q.empty()){
            // S1:
            int frontNode = q.front();
            // S2:
            q.pop();
            // S3:
            cout << frontNode << ", ";
            // S4: Insert Neighbour
            for(auto neighbour : adjList[frontNode]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }

    }
};

int main(){
    Graph g;
    // Undirected Graph Input:
    cout << "Undirected Graph: ";
    g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(3, 5, 0);
    g.addEdge(3, 7, 0);
    g.addEdge(7, 6, 0);
    g.addEdge(7, 4, 0);
    cout << endl;
    g.printAdjList();
    cout << endl;

    unordered_map<int, bool> visited;
    cout << "BFS Traversal: ";
    for(int i=0; i<=7; i++){
        if(!visited[i]){
            g.bfs(i, visited);
        }
    }
}