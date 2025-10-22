#include <iostream>
using namespace std;

int partition(int array[], int low, int high) {
    int pivot = array[high];
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(array[i], array[j]);
        }
    }

    swap(array[i + 1], array[high]);
    return (i + 1);
}

void quickSort(int array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);

        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

int main() {
    int data[] = {7, 6, 10, 5, 9, 2, 1, 15, 7};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    quickSort(data, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i)
        cout << data[i] << " ";
    cout << endl;

    return 0;
}