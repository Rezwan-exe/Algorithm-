#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    bool swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

// Function used for print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main() {
    int arr[] = {6,4,2,1,9,8,3,5,12,10,11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: \n";
    printArray(arr, n);
    
    bubbleSort(arr, n);
    cout << "\nSorted array: \n";
    printArray(arr, n);

    return 0;
}


