#include <iostream>
using namespace std;

long faktorial(int a)
{
    if (a == 0 ||a == 1)
    {
        return 1;
    } else 
    {
        return a * faktorial(a - 1);
    }
}

int main()
{
    int  n = 8;
    int hasil = faktorial(n);
    cout << hasil << endl;
    return 0;
}