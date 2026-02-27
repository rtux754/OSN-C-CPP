#include <iostream>
using namespace std;

int teka_teki(int a, int b);

int main()
{
    cout << teka_teki(10, 3) << endl;
    return 0;
}

int teka_teki(int a, int b)
{
    if (a < b){
        return a + b;
    } else {
        return teka_teki(a - b, b + 1) + 2;
    }
}