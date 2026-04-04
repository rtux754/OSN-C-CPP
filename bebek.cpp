#include <iostream>
using namespace std;

// subprogram
void fungsi(int *arr, int size);

void fungsi(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j+ 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int N[5] = {12, 13, 14, 16, 12}; // jumlah ekor bebek
    int p = 5;

    // cout << "Masukkan tinggi bebek:" << endl;
    // for (int i = 0; i < p ; i++)
    // {   
        // cout << "Angka:";
        // cin >>  N[i];
    // }

    fungsi(N, p);

    cout << "Hasil dari input : " << endl;
    for (int i = 0; i < p; i++)
    {
        cout << *(N+i) << endl;
    }

    return 0;
}