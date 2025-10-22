#include <iostream>
using namespace std;

struct Item {
    int weight;
    int profit;
    double ratio;
};

bool compare(Item a, Item b) {
    return (a.ratio > b.ratio);
}

double fractionalKnapsack(Item arr[], int n, int W) {
    sort(arr, arr + n, compare);

    int currWeight = 0;
    double finalProfit = 0.0;

    for (int i = 0; i < n; i++) {
        if (currWeight + arr[i].weight <= W) {
            currWeight = currWeight + arr[i].weight; 
            finalProfit = finalProfit + arr[i].profit;
        } else {
            int remainingWeight = W - currWeight;
            finalProfit += arr[i].ratio * remainingWeight;
            break;
        }
    }

    return finalProfit;
}

int main() {
    int W = 15;
    int n = 7; 

    Item arr[] = {{3, 12}, {1, 5}, {4, 16}, {2, 7}, {9, 9}, {4, 11}, {3, 6}};

    for (int i = 0; i < n; i++) {
        arr[i].ratio = (double)arr[i].profit / arr[i].weight;
    }

    double maxProfit = fractionalKnapsack(arr, n, W);

    cout << "Maximum profit: " << maxProfit << endl;

    return 0;
}