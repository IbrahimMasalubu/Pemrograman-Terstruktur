#include <iostream>
#include <limits> // Untuk std::numeric_Limits
//using namespace std;
int main() {

    //Tipe data integer
    int integerVar = 42;
    std::cout << "Tipe Data Integer: " << integerVar << std::endl;

    //Tipe data float
    float floatVar = 3.14;
    std::cout << "Tipe Data Float: " << floatVar << std::endl;

    //Tipe data double
    double doubleVar =3.14159;
    std::cout << "Tipe Data Double: " << doubleVar << std::endl;

    //Tipe data char
    char charVar ='A';
    std::cout << "Tipe Data Char: " << charVar << std::endl;

    //Tipe data boolean
    bool boolVar = true;
    std::cout << "Tipe Data Boolean: " << std::boolalpha << boolVar << std::endl;

    //Menampilkan batasan tipe data

    std::cout << "\nBatasan Tipe Data: " << std::endl;
    std::cout << "Integer: " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Float: " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "Double: " << std::numeric_limits<double>::min() << " to " << std::numeric_limits<double>::max() << std::endl;

    return 0;
}
