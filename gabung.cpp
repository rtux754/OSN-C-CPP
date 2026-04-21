 #include <iostream>
 using namespace std;
 
 void gabungString(char *depan, char* belakang, char *hasil);
 
 void gabungString(char *depan, char* belakang, char* hasil)
 {
	 while (*depan != '\0')
	 {
		 *hasil = *depan;
		 depan++;
		 hasil++;
		 }
		
	 while (*belakang != '\0')
	 {
		 *hasil = *belakang;
		 belakang++;
		 hasil++;
		 } 
	 *hasil = '\0';
	 }
 
 int main()
 {
	 char depan[] = "Gamer";
	 char belakang[] = "Fenrir";
	 char hasil[12];
	 
	 gabungString(depan, belakang, hasil);
	 cout << "Hasil Gabung: " << hasil << endl;

	 return 0;
	 }
