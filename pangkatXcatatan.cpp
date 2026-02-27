#include <iostream>
using namespace std;

int catatan[100]; 

int pangkat_memo(int x, int y) {
    // 1. Cek apakah hasil untuk pangkat 'y' sudah ada di catatan
    if (catatan[y] != -1) {
        return catatan[y];
    }

    // 2. Base Case
    if (y == 0) {
        return 1;
    }

    // 3. Hitung, Simpan ke catatan[y], lalu Kembalikan nilainya
    catatan[y] = x * pangkat_memo(x, y - 1);
    return catatan[y];
}

int main() {
    // Inisialisasi catatan dengan -1
    for(int i = 0; i < 100; i++) catatan[i] = -1;

    cout << pangkat_memo(2, 13) << endl; // Menghitung 2^13
    return 0;
}