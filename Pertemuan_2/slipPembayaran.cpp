#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama_barang;
    double harga_satuan, total_harga, diskon, harga_bayar, uang_diterima, kembalian;
    int jumlah_barang;

    // Input data
    cout << "Masukkan nama barang: ";
    getline(cin, nama_barang);

    cout << "Masukkan harga satuan: ";
    cin >> harga_satuan;

    cout << "Masukkan jumlah barang: ";
    cin >> jumlah_barang;

    // Hitung total harga
    total_harga = harga_satuan * jumlah_barang;

    // Hitung diskon
    if (jumlah_barang >= 100) {
        diskon = total_harga * 0.20;
    } else if (jumlah_barang >= 50) {
        diskon = total_harga * 0.15;
    } else if (jumlah_barang >= 25) {
        diskon = total_harga * 0.10;
    } else if (jumlah_barang >= 10) {
        diskon = total_harga * 0.05;
    } else {
        diskon = 0;
    }

    // Hitung harga yang harus dibayar
    harga_bayar = total_harga - diskon;

    // Cetak slip pembayaran
    cout << "\n===== SLIP PEMBAYARAN =====" << endl;
    cout << "Nama Barang    : " << nama_barang << endl;
    cout << "Harga Satuan   : Rp. " << harga_satuan << endl;
    cout << "Jumlah Barang  : " << jumlah_barang << endl;
    cout << "Total Harga    : Rp. " << total_harga << endl;
    cout << "Diskon         : Rp. " << diskon << endl;
    cout << "Harga Bayar    : Rp. " << harga_bayar << endl;

    // Input uang yang diterima
    cout << "\nMasukkan uang yang diterima: Rp. ";
    cin >> uang_diterima;

    // Hitung kembalian
    if (uang_diterima > harga_bayar) {
        kembalian = uang_diterima - harga_bayar;
        cout << "Kembalian      : Rp. " << kembalian << endl;
    } else if (uang_diterima < harga_bayar) {
        cout << "Uang yang diberikan kurang!" << endl;
    } else {
        cout << "Uang pas. Terima kasih!" << endl;
    }

    cout << "===========================" << endl;

    return 0;
}