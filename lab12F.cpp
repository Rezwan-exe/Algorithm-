#include <iostream>
using namespace std;

const int MAX_NODES = 10;
void BFS(int graph[MAX_NODES][MAX_NODES], int nodes, int start) {
    
    bool visited[MAX_NODES] = {false};
    queue<int> q;
    visited[start] = true;
    q.push(start);

    cout<<"BFS Traversal: ";
    
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << " ";
        for (int i = 0; i < nodes; i++) {
            if (graph[current][i]==1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    cout<<endl;
}

int main() {
    int nodes = 9;
    int graph[MAX_NODES][MAX_NODES] = {0};
    graph[5][2] = 1;
    graph[5][0] = 1;
    graph[2][4] = 1;
    graph[2][7] = 1;
    graph[7][5] = 1;
    graph[7][6] = 1;
    graph[7][8] = 1;
    graph[6][3] = 1;
    graph[6][5] = 1;
    graph[6][8] = 1;
    graph[3][1] = 1;
    graph[1][0] = 1;
    
    BFS(graph, nodes, 5);

    return 0;
}
 