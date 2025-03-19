#include <iostream>
using namespace std;

// untuk menambah data
double bagi(double a, double b) {
    return a / b;
}
// fungsi utama
int main() {
    // panggil fungsi
    double bilA, bilB;

    cout <<"Masukkan Nilai Pertama : ";
    cin >> bilA;
    cout <<"Masukkan Nilai Kedua : ";
    cin >> bilB;
    double hasil = bagi(bilA, bilB);
    cout <<"Hasil Pembagian : " << hasil << endl;

    return 0;
}
