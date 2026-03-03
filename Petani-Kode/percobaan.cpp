#include <iostream>
using namespace std;

int main()
{
    char Grade;
    int nilai;

    cout << "Masukkan Grade yang kamu dapatkan untuk melihat apakah lulus atau tidak!" << endl;
    cout << "Grade:";
    cin >> Grade;

    switch (toupper(Grade))
    {
        case 'A':
        case 'B':
            cout << "Lulus!" << endl;
        break;
        case 'C':
        case 'D':
        case 'E':
        case 'F':
            cout << "Tidak lulus!" << endl;
        break;
        default:
        cout << "Input tidak valid!" << endl;
    }

    return 0;
}