//menjumlahkan bilangan 1 s/d 10
#include <iostream>
using namespace std;

int main() {
    //siapkan 2 variable
    int x = 1; // inisial untuk integrasi
    int total = 0; // inisial untuk nilai total dari iterasi

    while (x <= 10) {
        cout << "iterasi :" << x << endl;
        total+=x;//
        x++;

    }

    cout << "Hasil Penjumlahan Nilai 1 s/d 10: " << total << endl;

    return 0;
}
