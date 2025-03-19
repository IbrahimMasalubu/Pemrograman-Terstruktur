#include <iostream>
using namespace std;

// untuk menambah data
int kali(int a, int b) {
    return a * b;
}
// fungsi utama
int main() {
    // panggil fungsi
    int bilA, bilB;

    cout <<"Masukkan Nilai Pertama : ";
    cin >> bilA;
    cout <<"Masukkan Nilai Kedua : ";
    cin >> bilB;
    int hasil = kali(bilA, bilB);
    cout <<"Hasil Perkalian : " << hasil << endl;

    return 0;
}
