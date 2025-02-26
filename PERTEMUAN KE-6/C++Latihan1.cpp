#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    float tinggiBadan, beratBadan, selisih;

    // Input tinggi badan dan berat badan
    cout << "Masukkan tinggi badan (dalam cm): ";
    cin >> tinggiBadan;

    // Validasi input tinggi badan
    if (tinggiBadan <= 0) {
        cout << "Tinggi badan tidak boleh kurang dari atau sama dengan 0!" << endl;
        return 1;  // Menghentikan program jika input tidak valid
    }

    cout << "Masukkan berat badan (dalam kg): ";
    cin >> beratBadan;

    // Validasi input berat badan
    if (beratBadan <= 0) {
        cout << "Berat badan tidak boleh kurang dari atau sama dengan 0!" << endl;
        return 1;  // Menghentikan program jika input tidak valid
    }

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
