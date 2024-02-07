#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

class Graph{
public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool direction){
        adjList[u].push_back(v);
        if(direction == 0){
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

    bool checkCycleUsingBFS(int src, unordered_map<int, bool>& visited){
        queue<int> q;
        unordered_map<int, int> parent;
        q.push(src);
        parent[src] = -1;

        while(!q.empty()){
            int frontNode = q.front();
            q.pop();

            for(auto nbr : adjList[frontNode]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true;
                    parent[nbr] = frontNode;
                }
                else{
                    // Already Visited:
                    if(frontNode != parent[nbr]){
                        // Cycle Present:
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

int main(){
    Graph g;
    // Undirected Graph Input:
    cout << "Undirected Graph: ";
    g.addEdge(0, 1, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(0, 2, 0);
    g.addEdge(2, 4, 0);
    cout << endl;
    g.printAdjList();
    cout << endl;

    unordered_map<int, bool> visited;
    
    bool ans = false;
    for(int i=0; i<=4; i++){
        if(!visited[i]){
            bool ans = g.checkCycleUsingBFS (i, visited);
            if(ans == true){
                break;
            }
            g.bfs(i, visited);
        }
    }

    if(ans == true){
        cout << "Cycle is Present" << endl;
    }
    else{
        cout << "Cycle is Absent" << endl;
    }
}
