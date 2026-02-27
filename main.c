#include <stdio.h>

int rekursif(int n);

void main()
{
    int n;
    printf("Masukkan angka: ");
    scanf("%d", &n);
    printf("Hasil rekursif: %d\n", rekursif(n));

}

int rekursif(int n)
{
    if (n <= 1){
        return n;
    } else {
        return rekursif(n - 1) + rekursif(n - 2);
    }
}


/*
    rekursif(5) = 5 + rekursif(3)
                 = 5 + 3 + rekursif(1)
                 = 5 + 3 + 1
                 = 9
    

    f(3) = f(2) + f(1)

    f(2) = f(1) + f(0)
         = 1 + 1
         = 2
*/