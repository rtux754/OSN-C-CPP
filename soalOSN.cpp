#include <iostream>
using namespace std;

int boss(int m, int n) {
    // Bagian 1: Base Case dengan Operasi Bitwise XOR
    if (m <= 0 || n <= 0) {
        return m ^ n;
    }

    // Bagian 2: Recursive Step dengan Kondisi Logika
    if ((m + n) % 2 == 0) {
        // Jika jumlah m dan n genap
        return boss(m - 2, n - 1) + (m & n);
    } else {
        // Jika jumlah m dan n ganjil
        return boss(m / 2, n / 2) + (m | n);
    }
}

int main() {
    cout << boss(5, 4) << endl;
    return 0;
}