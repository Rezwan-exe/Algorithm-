#include <iostream>

using namespace std;

int main() {
    int arr[] = {10, 15, 30, 70, 80, 60, 20, 90, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int data;

    cout << "Enter the value to search for: ";
    cin >> data;

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == data) {
            cout << "Data found at index " << i << endl;
            found = 1;
            break;
        }
    }

    if (found == 0) {
        cout << "Data not found in the array." << endl;
    }

    return 0;
}