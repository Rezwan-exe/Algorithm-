#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, temp, j;
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;

        while (arr[j] > temp  &&  j >= 0) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

// Function used for print an array
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {6,4,0,2,9,0,3,2,12,10,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    

    cout << "Unsorted array: \n";
    printArray(arr, n);

    insertionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    

    return 0;
}