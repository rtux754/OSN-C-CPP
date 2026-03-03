#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int x);

int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Cek apakah x ada di tengah
        if (arr[mid] == x)
            return mid;

        // Jika x lebih besar, abaikan bagian kiri
        if (arr[mid] < x)
            low = mid + 1;

        // Jika x lebih kecil, abaikan bagian kanan
        else
            high = mid - 1;
    }
    return -1; // Tidak ketemu
}

int main()
{
    // A = [2, 5, 8, 12, 16, 23, 38, 56, 72, 91]
}