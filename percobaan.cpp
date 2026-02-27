#include <iostream>
using namespace std;

int faktorial(int x);

int main()
{
    cout << faktorial(5) << endl;

}

int faktorial(int x)
{
    if (x == 0)
    {
        return 1;
    } else {
        return x * faktorial(x - 1);
    }
}