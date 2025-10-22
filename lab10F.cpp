#include <iostream>
using namespace std;

int knapsack(int W, int wt[], int val[], int n) {
    int i, w;
    int K[n + 1][W + 1];

    for (i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            K[i][w] = 0;
        }
    }

    for (i = 1; i <= n; i++) {
        for (w = 1; w <= W; w++) {
            if (wt[i - 1] <= w) {
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            } else {
                K[i][w] = K[i - 1][w];
            }
        }
    }

    return K[n][W];
}

int main() {
    int val[] = {1, 4, 5, 7};
    int wt[] = {1, 3, 4, 5};
    int W = 7;
    int n = sizeof(val) / sizeof(val[0]);

    cout << "Maximum value that can be obtained: " << knapsack(W, wt, val, n) << endl;

    return 0;
}