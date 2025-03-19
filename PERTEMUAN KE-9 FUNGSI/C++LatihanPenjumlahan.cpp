#include <iostream>
using namespace std;

// untuk menambah data
int tambah(int a, int b) {
    return a + b;
}
// fungsi utama
int main() {
    // panggil fungsi
    int bilA, bilB;

    cout <<"Masukkan Nilai Pertama : ";
    cin >> bilA;
    cout <<"Masukkan Nilai Kedua : ";
    cin >> bilB;
    int hasil = tambah(bilA, bilB);
    cout <<"Hasil Penjumlahan : " << hasil << endl;

    return 0;
}
// latihannya buatkan fungsi untuk perkalian, pengurangan, pembagian dan mod
