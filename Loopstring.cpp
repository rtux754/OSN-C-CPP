 #include <iostream>
 using namespace std;
 
 //~ int hitungHuruf(char *ptr, int target);
 void copyCat(char* sumber, char* tujuan);
 
 //~ int hitungHuruf(char *ptr, int target)
 //~ { 
	 //~ int counter = 0;
	 //~ while (*ptr != '\0')
	 //~ {
		 //~ if (*ptr == target)
		 //~ {
			 //~ counter++;
			 //~ }
			//~ ptr++;
		 //~ }
	 //~ return counter;
	 //~ }
	 
 void copyCat(char *sumber, char* tujuan)
 {
	 while (*sumber != '\0')
	 {
		 *tujuan = *sumber;
		 sumber++;
		 tujuan++;
		 }
		 *tujuan = '\0';
	 }
 
 //~ int hitungPanjang(char *ptr);
 
 //~ int hitungPanjang(char *ptr)
 //~ {
	 //~ int counter = 0;
	 //~ while (*ptr != '\0')
	 //~ {
		 //~ counter++;
		 //~ ptr++;
	 //~ }
	  //~ return counter;
 //~ }
 
 int main()
 {
	char nama[] = "Fenrir"; // ini sama dengan {'F', 'e', 'n', 'r', 'i', 'r','\0'};
	//~ int panjang = hitungPanjang(nama);
	//~ cout << "Panjang kata " << nama << " adalah: " << panjang << endl;
	//~ char target = 'r';
	//~ int jumlah = hitungHuruf(nama, target);
	//~ cout << "Jumlah huruf " << target << " di dalam array nama adalah >> " << jumlah << endl;
	
	char copy[10];
	copyCat(nama, copy);
	cout << "Hasil copy: " << copy << endl;
	
	return 0;
 }
