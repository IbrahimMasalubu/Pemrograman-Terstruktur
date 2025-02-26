#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan skor
    int skor;

    // Meminta input skor dari mahasiswa
    cout << "Masukkan skor mahasiswa (angka bilangan bulat): ";
    cin >> skor;

    // Menentukan nilai dalam huruf berdasarkan skor
    if (skor > 80) {
        cout << "Nilai: A" << endl;
    } else if (skor >= 60 && skor <= 79) {
        cout << "Nilai: B" << endl;
    } else if (skor >= 40 && skor <= 59) {
        cout << "Nilai: C" << endl;
    } else if (skor >= 20 && skor <= 39) {
        cout << "Nilai: D" << endl;
    } else if (skor < 20) {
        cout << "Nilai: E" << endl;
    } else {
        cout << "Skor tidak valid!" << endl;
    }

    return 0;
}
