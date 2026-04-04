#include <iostream>
using namespace std;

int sikat(int a, int b) {
    // Base Case: Menggunakan Bitwise OR
    if (a == 0 || b == 0) {
        return a | b;
    }

    if (a > b) {
        // Jika a lebih besar, kurangi a dan tambahkan hasil AND dengan 1
        return sikat(a - 2, b) + (a & 1);
    } else {
        // Jika a tidak lebih besar, bagi b dan tambahkan hasil XOR dengan 2
        return sikat(a, b / 2) + (b ^ 2);
    }
}

int main() {
    cout << sikat(5, 3) << endl;
    return 0;
} 