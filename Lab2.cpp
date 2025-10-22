#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    int i, j, min;

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min])
                min = j;

        swap(arr[min], arr[i]);
    }
}

// Function used for print an array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {0,3,2,10,0,1,1,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: \n";
    printArray(arr, n);
    
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);


    return 0;
}