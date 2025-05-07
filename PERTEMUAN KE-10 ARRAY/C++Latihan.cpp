#include <iostream>
using namespace std;

int main() {
    int nilai[5] = {85, 90, 78, 92, 88};
    int max = nilai[0];
    float total = 0;

    //Hitung total dan cari nilai tertinggi
    for (int i = 0; i < 5; i++) {
        total += nilai [i];
        if (nilai[i] > max) {
            max = nilai[i];
        }
    }
    cout << "Rata-rata: "<< total / 5 << endl;
    cout << "Nilai Tertinggi: " << max << endl;
    return 0;
}
