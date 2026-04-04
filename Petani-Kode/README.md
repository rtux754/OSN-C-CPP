# C++

Ini adalah program belajar ku yang aku pelajari dari Website Petani Kode https://www.petanikode.com/tutorial/c++/

Ini adalah file untuk catatan beberapa hal yang akan berguna nantinya.

########################################
########################################


# Penjelasan format library
.h artinya header file dari C atau C++;
.cpp artinya source code dari C++;
.hpp artinya header file dari C++;
.cc dan .c artinya header file dari C.

# Cara membedakan string dan char
string di himpit oleh "...."
char di himpit oleh '....'

# Cara menulis variabel
```cpp
string nama = "Petani Kode";
cout << "Hello " << nama << endl;
```
# Cara mengatasi spasi pada fungsi scanf()
```cpp
string name[20];
printf(nama:);
scanf("%[^\n]s", &name)
```
# Macam-macam tipe data
|Nama Tipe Data | Ukuran dalam Memori | Rentang Nilai |
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
Khusus untuk tipe data string, kita menggunakan fungsi getline() untuk mengambil satu baris nilai yang diinputkan.
```cpp
string nama;
getline(cin, nama);
```
# Mengubah nama tipe data
```cpp
// typedef tipe_data nama_baru;
typedef int angka;
int berubah menjadi angka
```
- cara menggunakannya
```cpp
angka umur;
```
# Menggunakan auto untuk tipe data
Kata kunci auto berfungsi untuk menentukan tipe data secara otomatis berdasarkan data yang tersimpan di dalam sebuah variabel. Tipe auto biasanya dipakai untuk menentukan tipe data secara dinamis.
```cpp
auto tinggi_badan;
```
jika di isi dengan 170 maka dia akan menjadi, jika 170.5 akan menjadi float, jika "175cm" akan menjadi string.
bisa diisi dengan tipe data apapun.

# Cara membuat tipe data
```cpp
 int age = 18;
 float tinggi = 155.5f; // gunakan f di akhir untuk memberitahu bahwa tipe datanya adalah float
 ```

# Operator bitwise
```cpp
 >>  //right shift  menghasilkan nilai biner yang di geser ke kanan
 <<  //left shift  menghasilkan nilai biner yang di geser ke kiri
 &   //and  menghasilkan satu bila keduanya true
 |   //or  menghasilkan satu bila salah satunya ada yang true 
 ^   //xor  menghasilkan satu bila kedua angka tidak sama
 ~   //not/komplemen - menghasilkan nilai biner yang terbalik dari biner aslilnya
 ```

# Operator logika
```cpp
 && // and
 || // or
 !  //negasi
 ```

# Operator lain
```cpp
 &  //mengambil  alamat memori
 *  //membuat pointer
 ?: //membuat kondisi(if else versi singkat)
 ++ //menambah satu angka
 -- //mengurangi satu angka
```

# Array

`ada dua cara untuk mengambil panjang array.`

- cara pertama:
menggunakan sizeof()
fungsi sizeof() sebenarnya akan mengambil ukuran memori dari array

Misalkan saya punya array seperti ini:
```cpp
int nilai[2] = {1, 2};
```
Isi array-nya berupa integer, tipe data integer memiliki ukuran 4 byte dalam memori. Maka ukuran array tersebut adalah 8 byte.

Lalu bagaimana cara mendapatkan banyaknya isi array?

Karena di bahasa C belum memiliki fungsi khusus untuk mengambil banyaknya isi array.

Kita harus membaginya dengan panjang pointernya.

Contoh:
```cpp
int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

/* ukuran array dalam byte */
int size = sizeof(array);

/* banyaknya isi array `array` */
int length = sizeof(array) / sizeof(*array);
```
- Cara kedua
menggunakan Class Template

Contoh:
```cpp
// membuat array dengan class
array<string, 5> names = {"Ali", "Abi", "Ami", "Mia", "Nia"};
// mengambil ukuran array
cout << names.size();
```
untuk menggunakannya kita harus import dulu #include <array\>

# Enum