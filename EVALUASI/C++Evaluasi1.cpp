#include <iostream>
using namespace std;

int main() {
    double celcius;

    // Input suhu dalam Celcius
    cout << "Masukan suhu dalam celcius: ";
    cin >> celcius;

    // Konversi suhu
    cout << "Fahrenheit: " << (9.0 / 5.0) * celcius + 32 << " F " << endl;
    cout << "Reamur: " << (4.0 / 5.0) * celcius << " R " << endl;
    cout << "Kelvin: " << 273 + celcius << " K " << endl;

    return 0;
}
