#include <iostream>
using namespace std;

void DFS(int graph[10][10], int vertex, int start) {
    int stack[10];
    int top = -1;
    bool visited[10] = {false};

    stack[++top] = start;

    cout << "DFS Traversal For The Graph: ";

    while (top != -1) {
        int current = stack[top--];

        if (!visited[current]) {
            cout << current << " ";
            visited[current] = true;

            for (int i = 0; i < vertex; ++i) {
                if (graph[current][i] == 1 && !visited[i]) {
                    stack[++top] = i;
                }
            }
        }
    }

    cout << endl;
}

int main() {
    int vertex = 9;
    int graph[10][10] = {};

    graph[5][0] = 1;
    graph[5][2] = 1;
    graph[2][4] = 1;
    graph[7][5] = 1;
    graph[2][7] = 1;
    graph[7][6] = 1;
    graph[6][3] = 1;
    graph[6][5] = 1;
    graph[6][8] = 1;
    graph[3][1] = 1;
    graph[7][8] = 1;
    graph[1][0] = 1;

    DFS(graph, vertex, 5);

    return 0;
}