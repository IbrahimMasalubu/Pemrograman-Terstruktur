#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

bool isSymmetric(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1])
            return false;
    }
    return true;
}

int countFrequency(int arr[], int n, int target) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            count++;
    }
    return count;
}

int main() {
    int arr[] = {5, 10, 15, 20, 15, 10, 5};  // Array baru dengan angka yang berbeda
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    printArray(arr, n);

    int target = 10;
    int frequency = countFrequency(arr, n, target);
    cout << "Angka " << target << " muncul sebanyak " << frequency << " kali dalam array." << endl;

    if (isSymmetric(arr, n)) {
        cout << "Array ini simetris." << endl;
    } else {
        cout << "Array ini tidak simetris." << endl;
    }

    return 0;
}
