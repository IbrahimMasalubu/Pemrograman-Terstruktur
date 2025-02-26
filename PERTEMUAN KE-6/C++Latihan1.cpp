#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    float tinggiBadan, beratBadan, selisih;

    // Input tinggi badan dan berat badan
    cout << "Masukkan tinggi badan (dalam cm): ";
    cin >> tinggiBadan;
    cout << "Masukkan berat badan (dalam kg): ";
    cin >> beratBadan;

    // Menghitung selisih antara tinggi badan dan berat badan
    selisih = tinggiBadan - beratBadan;

    // Menentukan kategori berdasarkan selisih
    if (selisih > 120) {
        cout << "Status tubuh: Kegemukan" << endl;
    } else if (selisih >= 111 && selisih <= 120) {
        cout << "Status tubuh: Ideal" << endl;
    } else if (selisih >= 100 && selisih < 111) {
        cout << "Status tubuh: Kurus" << endl;
    } else {
        cout << "Status tubuh: Sangat Kurus" << endl;
    }

    return 0;
}

