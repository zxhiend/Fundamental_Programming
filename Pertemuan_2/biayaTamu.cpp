#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama_tamu, jenis_kamar;
    int lama_menginap;
    double harga_per_malam, biaya_menginap, pajak, total_biaya;

    // Input data
    cout << "Masukkan nama tamu: ";
    getline(cin, nama_tamu);

    cout << "Pilih jenis kamar (single/double/keluarga/VIP): ";
    cin >> jenis_kamar;

    cout << "Lama menginap (dalam malam): ";
    cin >> lama_menginap;

    // Menentukan harga per malam berdasarkan jenis kamar
    if (jenis_kamar == "single") {
        harga_per_malam = 200000;
    } else if (jenis_kamar == "double") {
        harga_per_malam = 350000;
    } else if (jenis_kamar == "keluarga") {
        harga_per_malam = 500000;
    } else if (jenis_kamar == "VIP") {
        harga_per_malam = 750000;
    } else {
        cout << "Jenis kamar tidak valid." << endl;
        return 1;
    }

    // Menghitung biaya
    biaya_menginap = harga_per_malam * lama_menginap;
    pajak = biaya_menginap * 0.15;
    total_biaya = biaya_menginap + pajak;

    // Mencetak bukti pembayaran
    cout << "\n===== BUKTI PEMBAYARAN =====" << endl;
    cout << "Nama Tamu      : " << nama_tamu << endl;
    cout << "Jenis Kamar    : " << jenis_kamar << endl;
    cout << "Lama Menginap  : " << lama_menginap << " malam" << endl;
    cout << "Harga per Malam: Rp. " << harga_per_malam << endl;
    cout << "Biaya Menginap : Rp. " << biaya_menginap << endl;
    cout << "Pajak Hotel 15%: Rp. " << pajak << endl;
    cout << "Total Biaya    : Rp. " << total_biaya << endl;
    cout << "===========================" << endl;

    return 0;
}
