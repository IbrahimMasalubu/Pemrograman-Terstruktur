#include <iostream>
using namespace std;
int a;

int main() {
    cout << "Masukan Nilai A : ";
    cin >> a;

    if (a == 0) {
        cout << "Anda Memasukan Nilai 0" << endl;
    } else if (a > 0) {
        cout << a << "Adalah Bilangan Positif" << endl;
    } else {
        cout << a << "Adalah Bilangan Negatif" << endl;
    }
}
