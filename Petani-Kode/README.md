# C++

Ini Adalah Program Belajar Ku Yang Aku Pelajari Dari Website Petani Kode https://www.petanikode.com/tutorial/c++/

Ini Adalah File Untuk Catatan Beberapa Hal Yang Akan Berguna Nantinya.

################################################################################


# Penjelasan Format Library
`.h` Artinya Header File Dari C Atau C++\
`.cpp` Artinya Source Code Dari C++\
`.hpp` Artinya Header File Dari C++\
`.cc` & `.c` Artinya Header File Dari C

# Cara Membedakan String & Char
string Di Himpit Oleh `"...."`
char Di Himpit Oleh `'....'`

# Cara Menulis Variabel
```cpp
string nama = "Petani Kode";
cout << "Hello " << nama << endl;
```
- Cara Mengatasi Spasi Pada Fungsi `scanf()`
```cpp
string name[20];
printf(nama:);
scanf("%[^\n]s", &name)
```
# Macam-macam Tipe Data
|Nama Tipe Data | Ukuran Dalam Memori | Rentang Nilai |
| :-- | :-- | :--: |
| char	         | 1byte	     |   -127 sampai 127 atau 0 sampai 255 |
| unsigned char  |  1byte	      |  0 sampai 255 |
| signed char	   |     1byte	   |     -127 sampai 127 |
| int	           |    4bytes     |     -2147483648 sampai 2147483647 |
| unsigned int	  | 4bytes	       | 0 sampai 4294967295 |
| signed int     |   4bytes	   |     -2147483648 sampai 2147483647 |
| short int	   |     2bytes	  |      -32768 sampai 32767 |
| unsigned short int |	Range	  |     0 sampai 65,535 |
| signed short int	| Range	      |  -32768 sampai 32767 |
| long int	       | 4bytes	      |  -2,147,483,648 sampai 2,147,483,647 |
| signed long int   |  4bytes	  |    same as long int |
| unsigned long int |	4bytes	   |     0 sampai 4,294,967,295 |
| float	         |   4bytes	   |     +/- 3.4e +/- 38 (~7 digits) |
| double          |  8bytes	     |   +/- 1.7e +/- 308 (~15 digits) |
| long double	       | 8bytes	      |  +/- 1.7e +/- 308 (~15 digits) |
| wchar_t            | 2 or 4 bytes   | 1 wide character |
| boolean	          |  4bytes	       | true atau false |


# String
Khusus Untuk Tipe Data `string`, Kita Menggunakan Fungsi `getline()` Untuk Mengambil Satu Baris Nilai Yang Diinputkan.
```cpp
string nama;
getline(cin, nama);
```
# Mengubah Nama Tipe Data
```cpp
// typedef tipe_data nama_baru;
typedef int angka;
int berubah menjadi angka
```
- Cara Menggunakannya
```cpp
angka umur;
```
# Menggunakan `auto` Untuk Tipe Data
`auto` Berfungsi Untuk Menentukan Tipe Data Secara Otomatis Berdasarkan Data Yang Tersimpan Di Dalam Sebuah Variabel. Tipe `auto` Biasanya Dipakai Untuk Menentukan Tipe Data Secara Dinamis.
```cpp
auto tinggi_badan;
```
Jika Di Isi Dengan `170` Maka Dia Akan Menjadi `int`, Jika `170.5` Akan Menjadi `float`, Jika `"175cm"` Akan Menjadi `string`.
Bisa Diisi Dengan Tipe Data Apapun.

# Cara Membuat Tipe Data
```cpp
 int age = 18;
 float tinggi = 155.5f;
 ```
Gunakan `f` Di Akhir Untuk Memberitahu Bahwa Tipe Datanya Adalah `float`

# Operator Bitwise

| Lambang | Nama Operator | Fungsi Operator |
| :-- | :-- | :--:|
| >> | Right Shift | Menghasilkan Nilai Biner Yang Di Geser Ke Kanan|
| << | Left Shift | Menghasilkan Nilai Biner Yang Di Geser Ke Kiri|
| & | And | Menghasilkan Nilai Satu Bila Keduanya `true`|
| \| | Or | Cukup Butuh Satu Nilai Yang Bernilai `true` Untuk Menghasilkan Nilai Satu|
| ^ | XOR | Menghasilkan Satu Bila Kedua Angka Tidak Sama |
| ~ | Not/Komplemen | Menghasilkan Nilai Biner Negatif |

# Operator Logika
| Lambang | Nama Operator | Fungsi Operator|
|:--|:--|:--:|
|&|And|Menghasilkan Nilai `true` Ketika Keduanya `true`|
|\||Or|Tidak Perlu Kedua Nilai Bernilai `true` Untuk Mendapatkan Nilai `true`|
|!|Not\Komplemen|Menghasilkan Nilai `true` Jika Data Bernilai `false`|

# Operator Aritmatika
| Lambang|Fungsi|
|:--|:--:|
|+| Tambah
|-|Kurang|
|\ | Bagi|
|*|Kali|
|%|Sisa Bagi|
| ++ | Menambahkan Satu Angka|
| -- |Mengurangi Satu Angka|

# Operator Lain
|Lambang | Fungsi|
|:--|:--:|
| &[data]  | Mengambil Alamat Tipe Data|
| *[data]  | Membuat Pointer|
| ?: | Ternary(Versi Mini If-Else)|


# Array

`Ada Dua Cara Untuk Mengambil Panjang Array.`

- Cara Pertama:
Menggunakan `sizeof()`
fungsi `sizeof()` Sebenarnya Akan Mengambil Ukuran Memori Dari Array

Misalkan Saya Punya Array Seperti Ini:
```cpp
int nilai[2] = {1, 2};
```
Isi Array-nya Berupa `int`, Tipe Data `int` Memiliki Ukuran `4 byte` Dalam Memori. Maka Ukuran Array Tersebut Adalah `8 byte`.

Lalu Bagaimana Cara Mendapatkan bBanyaknya Isi Array?

Karena Di Bahasa C Belum Memiliki Fungsi Khusus Untuk Mengambil Banyaknya Isi Array. Kita Harus Membaginya Dengan Panjang Pointernya.

Contoh:
```cpp
int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

/* Ukuran array Dalam byte */
int size = sizeof(array);

/* Banyaknya Isi array `array` */
int length = sizeof(array) / sizeof(*array);
```
- Cara Kedua
Menggunakan Class Template

Contoh:
```cpp
// Membuat array Dengan class
array<string, 5> names = {"Ali", "Abi", "Ami", "Mia", "Nia"};
// Mengambil Ukuran array
cout << names.size();
```
Untuk Menggunakannya Kita Harus Import Dulu:
```cpp
#include <array>
```
# Enum