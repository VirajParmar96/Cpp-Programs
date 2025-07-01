/*
  Program: DFS (Graph Traversal)
  Level  : Advanced
  Author : Viraj Parmar
  Description:
    A program to perform Depth First Search (DFS) traversal on a graph.
*/

#include <iostream>
#include <vector>
using namespace std;

class Graph {
private:
    int V;
    vector<vector<int>> adj;
    vector<bool> visited;

    void dfsUtil(int v) {
        visited[v] = true;
        cout << v << " ";

        for (int neighbor : adj[v]) {
            if (!visited[neighbor])
                dfsUtil(neighbor);
        }
    }

public:
    Graph(int vertices) {
        V = vertices;
        adj.resize(V);
        visited.resize(V, false);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // Undirected
    }

    void DFS(int start) {
        cout << "DFS Traversal starting from node " << start << ": ";
        dfsUtil(start);
        cout << endl;
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.DFS(0);
    return 0;
}



// Output:
// DFS Traversal starting from node 0: 0 1 2 3 4
