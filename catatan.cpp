#include <iostream>
using namespace std;

int catatan[100]; // Buku catatan untuk menyimpan hasil

int main(){
    for (int i = 0; i < 100; i++){
        catatan[i] = -1; // Inisialisasi catatan dengan -1 (belum dihitung)
    }
}

int f_cepat(int n) {
    // 1. Cek apakah sudah ada di catatan
    if (catatan[n] != -1) {
        return catatan[n];
    }

    // 2. Base case tetap sama
    if (n <= 1) {
        return n;
    }

    // 3. Hitung dan SIMPAN ke catatan sebelum dikembalikan
    catatan[n] = f_cepat(n - 1) + f_cepat(n - 2);
    return catatan[n];
}

// 