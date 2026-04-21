#include <iostream>
#include <cstring>

using namespace std;

// --- STRUKTUR DATA ---
struct Karakter {
    char nama[20];
    int level;
    int hp;
    Karakter *targetSerang;
    Karakter *next;
};

// --- PROTOTIPE FUNGSI ---
void kenaRacun(Karakter *target);
void seranganMeteor(Karakter *grup, int jumlah);
void serang(Karakter *penyerang);
void tambahMonster(Karakter *&head, const char *namaBaru, int levelBaru, int hpBaru);
void pulihkanPasukan(Karakter *head, int jumlahHeal);
void cetakTotalStatus(Karakter *head);
Karakter *cariTarget(Karakter *head, const char *namaDiCari);

// --- IMPLEMENTASI FUNGSI ---

// Mengurangi HP target secara langsung menggunakan pointer
void kenaRacun(Karakter *target) {
    target->hp -= 50;
}

// Serangan area menggunakan aritmatika pointer
void seranganMeteor(Karakter *grup, int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        (grup + i)->hp -= 100;
    }
}

// Memulihkan hp pasukan 
void pulihkanPasukan(Karakter *head, int jumlahHeal) {
	Karakter *jalan = head;
	while (jalan != nullptr) {
		jalan->hp += jumlahHeal;
		cout << "Mengobati " << jalan->nama << "... HP sekarang: " << jalan->hp << endl;
		jalan = jalan->next;
	}
	cout << "Seluruh pasukan telah dipulihkan" << endl;
}

// Serang target yang sedang dikunci oleh karakter
void serang(Karakter *penyerang) {
    if (penyerang->targetSerang != nullptr) {
        penyerang->targetSerang->hp -= 586;
    }
}

// Mencari monster dalam Linked List berdasarkan nama
Karakter *cariTarget(Karakter *head, const char *namaDiCari) {
    Karakter *jalan = head;
    while (jalan != nullptr) {
        if (strcmp(jalan->nama, namaDiCari) == 0) {
            return jalan; 
        }
        jalan = jalan->next;
    }
    return nullptr;
}

// Menambahkan monster baru di akhir rantai (Linked List)
void tambahMonster(Karakter *&head, const char *namaBaru, int levelBaru, int hpBaru) {
    Karakter *baru = new Karakter;
    strcpy(baru->nama, namaBaru);
    baru->level = levelBaru;
    baru->hp = hpBaru;
    baru->targetSerang = nullptr;
    baru->next = nullptr;

    if (head == nullptr) {
        head = baru;
    } else {
        Karakter *jalan = head;
        while (jalan->next != nullptr) {
            jalan = jalan->next;
        }
        jalan->next = baru;
    }
}

 // Melakukan pernghitungan total hp keseluruhan monster dan keseluruhan jumlah monster
void cetakTotalStatus(Karakter *head) {
	Karakter *jalan = head;
	int totalHP = 0;
	int rataRata = 0;
	int jumlahMonster = 0;
	
	while (jalan != nullptr) {
			totalHP += jalan->hp;
			jumlahMonster++;
			jalan = jalan->next; 
		}
	rataRata = totalHP / jumlahMonster;
	cout << "Total HP: " << totalHP << endl;
	cout << "Rata-rata HP: " << rataRata << endl;
}

// --- MAIN PROGRAM ---
int main() {
    // 1. Inisialisasi Hero Utama
    Karakter hero1 = {"Fenrir", 134, 10000, nullptr, nullptr};
    cout << "Nama Hero: " << hero1.nama << " | HP: " << hero1.hp << endl;

    // 2. Membangkitkan Pasukan (Linked List)
    Karakter *head = nullptr;
    tambahMonster(head, "Alpha", 150, 13000);
    tambahMonster(head, "Saber", 145, 12500);
    tambahMonster(head, "Beta", 144, 12389);
    tambahMonster(head, "Mellina", 132, 1434);

    cout << "\n--- Daftar Pasukan Monster ---" << endl;
    Karakter *jalan = head;
    while (jalan != nullptr) {
        cout << "- " << jalan->nama << " (Lvl " << jalan->level << ") HP: " << jalan->hp << endl;
        jalan = jalan->next;
    }
    
    cout << "\n--- Menggunakan Skill Area: HEAL ---" << endl;
    pulihkanPasukan(head, 500); // Di sinilah fungsinya bekerja!
    cetakTotalStatus(head);

    // 3. Misi Assassin (Pencarian)
    cout << "\n--- Misi The Assassin ---" << endl;
    Karakter *target = cariTarget(head, "Saber");
    if (target != nullptr) {
        cout << "Target " << target->nama << " Ditemukan! Menyerang..." << endl;
        target->hp -= 9999;
        cout << "Sisa HP " << target->nama << ": " << target->hp << endl;
    }

    // 4. Simulasi Pertarungan Boss
    cout << "\n--- VS BOSS ---" << endl;
    Karakter boss = {"Ardun", 150, 17000, nullptr, nullptr};
    hero1.targetSerang = &boss;
    boss.targetSerang = &hero1;

    serang(&hero1);
    cout << "HP Boss " << boss.nama << " sisa: " << boss.hp << endl;
    cout << "Giliran Ardun menyerang balik!" << endl;
    serang(&boss);
    cout << "HP Hero " << hero1.nama << " sisa: " << hero1.hp << endl;

    // 5. Pembersihan RAM (Anti-Memory Leak)
    cout << "\n--- MEMBERSIHKAN RAM ---" << endl;
    Karakter *temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        cout << "Menghapus: " << temp->nama << "..." << endl;
        delete temp;
    }
    cout << "RAM Bersih! Program Selesai." << endl;

    return 0;
}
