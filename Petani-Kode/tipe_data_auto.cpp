#include <iostream>
using namespace std;

int main()
{
    
    // auto name = "rozzaq";
    auto name = string("rozzaq");
    auto age = 17;
    auto tinggi = 155.5f;
    auto menikah = false;

    cout << "Nama:" << name << endl;
    cout << "Tipe:" << typeid(name).name() << endl;
    // teks "Petani Kode" ternyata tipe datanya adalah PKc yang artinya Pointer Konstanta Char.

    cout << "Umur:" << age << endl;
    cout << "Tipe:" << typeid(age).name() << endl;

    cout << "Tinggi:" << tinggi << endl;
    cout << "Tipe:" << typeid(tinggi).name() << endl;

    cout << "Menikah:" << menikah << endl;
    cout << "Tipe:" << typeid(menikah).name() << endl;

    return 0;
}