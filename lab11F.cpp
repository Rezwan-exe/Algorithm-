#include <iostream>
using namespace std;

int lcs(int *A1, int *Profits, int m, int n) {

    int L[m + 1][n + 1];

    for (int i = 0; i <= m; i++) {
        L[i][0] = 0;
    }

    for (int j = 0; j <= n; j++) {
        L[0][j] = 0;
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (A1[i - 1] == Profits[j - 1]) {
                L[i][j] = L[i - 1][j - 1] + 1;
            } 
            else {
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
            }
        }
    }

    return L[m][n];
}

int main() {
    int A1[] = {2, 1, 7, 3, 5, 4, 8, 9, 3, 6};
    int Profits[] = {1, 3, 5, 2, 4, 3, 6, 7, 8, 9};
    int m = sizeof(A1) / sizeof(A1[0]);
    int n = sizeof(Profits) / sizeof(Profits[0]);

    int length = lcs(A1, Profits, m, n);
    cout << "Length of the Longest Common Subsequence: " << length << endl;

    return 0;
}