#include <iostream>
using namespace std;

int global = 7;

int param(int a);

int main()
{
    int percobaan = 3;
    int matriks[3][2] = {
        {4, 5},
        {5, 12},
        {4, 3}
        };

    cout << matriks[0][1] << endl;
    return 0;
}

int param(int a)
{
    cout << global * 3;
}