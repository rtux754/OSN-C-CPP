#include <stdio.h>

int pangkat(int x, int y);

void main()
{
    int hasil = pangkat(2, 3);
    printf("Hasil: %d\n", hasil);

}

int pangkat(int x, int y)
{
    if (y == 0){
        return 1;
    } else {
        return x * pangkat(x, y - 1);
    }
}