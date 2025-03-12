#include <iostream>
using namespace std;

int main() {
    int angka;
    do {
        cout << "Masukkan sebuah nilai (Nilai 0 untuk berhenti) : ";
        cin >> angka;
        cout << "Anda menginput nilai : " << angka << endl;
    } while(angka!=0);
    cout << "Program Selesai. Terima Kasih" << endl;

    return 0;
}
