#include <iostream>
using namespace std;

// untuk menambah data
int kurang(int a, int b) {
    return a - b;
}
// fungsi utama
int main() {
    // panggil fungsi
    int bilA, bilB;

    cout <<"Masukkan Nilai Pertama : ";
    cin >> bilA;
    cout <<"Masukkan Nilai Kedua : ";
    cin >> bilB;
    int hasil = kurang(bilA, bilB);
    cout <<"Hasil Pengurangan : " << hasil << endl;

    return 0;
}
