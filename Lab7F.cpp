#include <iostream>
using namespace std;

void countingSort(int arr[], int n, int k) {
    int count[k + 1];
    for (int i = 0; i <= k; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for (int i = 1; i <= k; i++) {
        count[i] = count[i] + count[i - 1];
    }

    int output[n];
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int main() {
    int arr[] = {6, 4, 2, 1, 9, 8, 3, 5, 12, 10, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 12; // Maximum element in the array

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    countingSort(arr, n, k);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}