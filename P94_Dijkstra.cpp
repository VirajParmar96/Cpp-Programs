/*
  Program: Dijkstra's Algorithm
  Level  : Advanced
  Author : Viraj Parmar
  Description:
    A program to find shortest paths from a source vertex to all vertices in a weighted graph using Dijkstra's algorithm.
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

const int INF = INT_MAX;

int minDistance(const vector<int>& dist, const vector<bool>& visited, int V) {
    int min = INF, minIndex = -1;

    for (int v = 0; v < V; ++v)
        if (!visited[v] && dist[v] <= min)
            min = dist[v], minIndex = v;

    return minIndex;
}

void dijkstra(const vector<vector<int>>& graph, int src) {
    int V = graph.size();
    vector<int> dist(V, INF);
    vector<bool> visited(V, false);

    dist[src] = 0;

    for (int count = 0; count < V - 1; ++count) {
        int u = minDistance(dist, visited, V);
        visited[u] = true;

        for (int v = 0; v < V; ++v)
            if (!visited[v] && graph[u][v] && dist[u] != INF &&
                dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    cout << "Vertex \tDistance from Source " << src << endl;
    for (int i = 0; i < V; ++i)
        cout << i << " \t" << dist[i] << endl;
}

int main() {
    vector<vector<int>> graph = {
        {0, 4, 0, 0, 0, 0, 0, 8, 0},
        {4, 0, 8, 0, 0, 0, 0, 11, 0},
        {0, 8, 0, 7, 0, 4, 0, 0, 2},
        {0, 0, 7, 0, 9, 14, 0, 0, 0},
        {0, 0, 0, 9, 0, 10, 0, 0, 0},
        {0, 0, 4, 14, 10, 0, 2, 0, 0},
        {0, 0, 0, 0, 0, 2, 0, 1, 6},
        {8, 11, 0, 0, 0, 0, 1, 0, 7},
        {0, 0, 2, 0, 0, 0, 6, 7, 0}
    };

    dijkstra(graph, 0);
    return 0;
}




// Output:
// Vertex  Distance from Source 0
// 0       0
// 1       4
// 2       12
// 3       19
// 4       21
// 5       11
// 6       9
// 7       8
// 8       14