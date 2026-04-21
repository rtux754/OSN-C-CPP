 #include <iostream>
 using namespace std;

//  void balikArray(int *arr, int size);
 int* cariAlamatTerbesar(int *eray, int size);

 int* cariAlamatTerbesar(int *eray, int size)
 {

    int *maxPtr = eray;
    
    for (int i = 0; i < size; i++)
    {
        if (eray[i] > *maxPtr)
        {
            maxPtr = &eray[i];
            // cout << "Nilai terbesar: " << *maxPtr << " ada di alamat " << maxPtr << endl;
        }
    }
    return maxPtr;
 }

//  void balikArray(int *arr, int size)
//  {
    // int temp;
    // int *start = arr;
    // int *end = arr + size - 1;
// 
    // while (start < end)
    // {
        // menukar nilai didalam alamat pointer
        // temp = *start;
        // *start = *end;
        // *end = temp;
// 
        // geser pointernya
        // start++;
        // end--;
    // }

//  }

 int main()
 {
    int arr[] = {12, 13, 14, 15, 16, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // balikArray(arr, n);
    // 
    // cout << "Hasil dari input:" << endl;
    // for (int i = 0; i < n; i++)
    // {
        // cout << arr[i] << endl;
    // }
    
    int *hasil = cariAlamatTerbesar(arr, n);
    cout << "Nilai terbesar: " << *hasil << " ada di alamat " << hasil << endl;
    // cout << "Bandingkan dengan &arr[5]: " << &arr[5] << endl;
    
    /* Gabut merubah nilai array tanpa harus manggil si array 
     * hasil memori nya berubah secara langsung */
     *hasil = 999;
     
     cout << "\nBukti kalau si array berubah: " << endl;
     for (int i = 0; i < n; i++)
     {
		 cout << "arr: " << arr[i] << endl;
     }
    
    return 0;
 }
