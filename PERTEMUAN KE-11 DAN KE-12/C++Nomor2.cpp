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
        if (arr[i] != arr[n - i - 1])  // Jika ada elemen yang tidak sama
            return false;
    }
    return true;  // Jika semua elemen sama, maka simetris
}

int main() {
    int arr[] = {10, 20, 30, 20, 10};  // Array yang simetris
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    printArray(arr, n);

    if (isSymmetric(arr, n)) {
        cout << "Array Simetris." << endl;
    } else {
        cout << "Bukan Array Simetris." << endl;
    }

    return 0;
}
