#include <iostream>

using namespace std;

int main()
{
    int pilihan;
    double nilai, hasil;

    cout << "Program Konversi Satuan Panjang" << endl;
    cout << "1. Yard ke Meter" << endl;
    cout << "2. Kaki ke Meter" << endl;
    cout << "3. Inchi ke Meter" << endl;
    cout << "Pilih satuan yang ingin dikonversi: ";
    cin >> pilihan;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    switch(pilihan)
    {
        case 1:
            hasil = nilai * 0.9144;
            cout << nilai << " yard = " << hasil << " meter" << endl;
            break;
        case 2:
            hasil = nilai * 0.3048;
            cout << nilai << " kaki = " << hasil << " meter" << endl;
            break;
        case 3:
            hasil = nilai * 0.0254;
            cout << nilai << " inchi = " << hasil << " meter" << endl;
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
            break;
    }

    return 0;
}
