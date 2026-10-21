#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Daftar Harga Menu
    const long harga_soto = 15000;
    const long harga_rawon = 20000;

    int jml_soto = 0;
    int jml_rawon = 0;
    int jml_pecel = 0;
    int jml_teh = 0;
    int jml_kopi = 0;

    cout << "====================================\n";
    cout << "        APLIKASI MINI KASIR         \n";
    cout << "====================================\n";
    cout << "1. Soto  : Rp " << harga_soto << "\n";
    cout << "2. Rawon : Rp " << harga_rawon << "\n";
    cout << "3. Pecel : Rp " << harga_pecel << "\n";
    cout << "4. Teh   : Rp " << harga_teh << "\n";
    cout << "5. Kopi  : Rp " << harga_kopi << "\n";
    cout << "====================================\n";

    // Input jumlah pesanan
    cout << "Masukkan jumlah porsi Soto  : ";
    cin >> jml_soto;
    cout << "Masukkan jumlah porsi Rawon : ";
    cin >> jml_rawon;
    cout << "Masukkan jumlah porsi Pecel : ";
    cin >> jml_pecel;
    cout << "Masukkan jumlah porsi Teh : ";
    cin >> jml_teh;
    cout << "Maukkan jumlah porsi Kopi : ";
    cin >> jml_teh;

    // Hitung Total
    long total_soto = jml_soto * harga_soto;
    long total_rawon = jml_rawon * harga_rawon;
    long total_pecel = jml_pecel * harga_pecel;
    long total_teh = jml_teh * harga_teh;
    long total_kopi = jml_kopi * harga_kopi;
    long total_bayar = total_soto + total_rawon;
    long total_bayar = total_pecel + total_kopi;
    long total_bayar = total_rawon + total_teh;

    cout << "\n====================================\n";
    cout << "          Rincian Pembayaran         \n";
    cout << "====================================\n";
    if (jml_soto > 0) {
        cout << "Soto  x" << jml_soto << " : Rp " << total_soto << "\n";
    }
    if (jml_rawon > 0) {
        cout << "Rawon x" << jml_rawon << " : Rp " << total_rawon << "\n";
    }
    if (jml_pecel > 0) {
        cout << "Pecel x" << jml_pecel << " : Rp " << total_pecel << "\n";
    }
    if (jml_pecel > 0) {
        cout << "Teh x" << jml_teh << " : Rp " << total_teh << "\n";
    }
    if (jml_kopi > 0) {
        cout << "Pecel x" << jml_kopi << " : Rp " << total_kopi << "\n";
    }
  
    cout << "------------------------------------\n";
    cout << "TOTAL BAYAR   : Rp " << total_bayar << "\n";
    cout << "====================================\n";

    // Menahan layar console di Windows agar tidak langsung exit saat berupa .exe
    cout << "\nTekan Enter untuk keluar...";
    cin.ignore();
    cin.get();

    return 0;
}
