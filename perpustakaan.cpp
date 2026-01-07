#include <iostream>
using namespace std;

int main () {
    string judul[5];
    int stok[5];
    int menu, n = 0;

    do {
        cout << "\n=== MENU PERPUSTAKAAN ===\n";
        cout << "1. Input buku\n";
        cout << "2. Tampil buku\n";
        cout << "3. Pinjam buku\n";
        cout << "4. Keluar\n";
        cout << "Pilih: ";
        cin >> menu;
        cin.ignore(1000, '\n'); // AMAN

        if (menu == 1) {
            cout << "Judul buku : ";
            getline(cin, judul[n]);
            cout << "Stok buku  : ";
            cin >> stok[n];
            n++;
        }
        else if (menu == 2) {
            for (int i = 0; i < n; i++) {
                cout << i+1 << ". " << judul[i]
                     << " (stok: " << stok[i] << ")\n";
            }
        }
        else if (menu == 3) {
            int i;
            cout << "Pilih nomor buku : ";
            cin >> i;

            if (i <= n && stok[i-1] > 0) {
                stok[i-1]--;
                cout << "Buku berhasil dipinjam\n";
            } else {
                cout << "Stok habis atau nomor tidak valid\n";
            }
        }

    } while (menu != 4);

    cout << "Program selesai\n";
    return 0;
}