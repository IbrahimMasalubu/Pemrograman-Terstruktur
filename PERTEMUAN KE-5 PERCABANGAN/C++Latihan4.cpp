#include <iostream>
using namespace std;

int main() {
    char kode;
    cout << "Masukkan kode barang [a..c]: ";
    cin >> kode;




    switch (kode) {
        case 'a':
            cout << "Alat olah raga" << endl;
            break;
        case 'b':
            cout << "Alat elektronik" << endl;
            break;
        case 'c':
            cout << "Alat masak" << endl;
            break;
        default:
            cout << "Anda salah memasukkan kode" << endl;
            break;
    }

    return 0;
}
