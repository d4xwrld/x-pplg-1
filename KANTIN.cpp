#include <iostream>
using namespace std;

int main()
{
    int kantin[3][5] = {{2500, 5000, 6000, 8000, 10000}, {1000, 3000, 5000, 7000, 9000}, {5000, 6000, 7000, 8000, 10000}};
    int menu, paket, jml, total, pay, kembali;
    
    //cout << "Selamat datang di Kantin Sauyunan!\n1. Kantin 1 ( Gorengan, Mie instant, Nasi Kuning, Mie ayam/Bakso )\n2. Kantin 2 ( Minuman, Kopi, Mie Instant, Seblak )\n3. Kantin 3 ( Ayam Goreng/Bakar, Mie Baso, Nasi Kuning, Aneka Masakan\nPilih : ";
    //cin >> menu;
   //system("cls");
   //switch (menu)
  //{
      //case 1:
      cout << "\nMenu : \n1.Aneka Gorengan ( Bala-bala, Gehu, Cireng ) Rp.2500/2biji\n2.Mie Instant Rp.5000\n3. Nasi Kuning Rp.6000\n4. Nasi Kuning Komplit Rp.8000\n5. Mie Ayam Rp.10000\nPilih : ";
      cin >> paket;
      
      switch (paket)
      {
          case 1:
          cout << "Selected : Aneka Gorengan Rp.2500 ( isi 2 )\nMasukan Kuantitas Pembelian : ";
          cin >> jml;
          total = kantin[0][0] * jml;
          cout << "Selected : Aneka Gorengan Rp.2500 ( isi 2 )\nJumlah : " << jml << endl << "Total Bayar : " << total << endl << " Nominal Pembayaran : ";
          cin >> pay;
          kembali = pay - total;
          cout << "Nominal Pembayaran : " << pay << endl << "Kembalian : " << kembali;
          
          case 2:
    cout << "Selected : Mie Instant Rp.5000\nMasukan Kuantitas Pembelian : ";
    cin >> jml;
    total = kantin[0][1] * jml;
    cout << "Selected : Mie Instant Rp.5000\nJumlah : " << jml << endl << "Total Bayar : " << total << endl << "Nominal Pembayaran : ";
    cin >> pay;
    kembali = pay - total;
    cout << "Nominal Pembayaran : " << pay << endl << "Kembalian : " << kembali;
    break;
    
    case 3:
    cout << "Selected : Nasi Kuning Rp.6000\nMasukan Kuantitas Pembelian : ";
    cin >> jml;
    total = kantin[0][2] * jml;
    cout << "Selected : Nasi Kuning Rp.6000\nJumlah : " << jml << endl << "Total Bayar : " << total << endl << "Nominal Pembayaran : ";
    cin >> pay;
    kembali = pay - total;
    cout << "\nNominal Pembayaran : " << pay << endl << "Kembalian : " << kembali;
    break;
    
    case 4:
    cout << "Selected : Nasi Kuning Komplit Rp.8000\nMasukan Kuantitas Pembelian : ";
    cin >> jml;
    total = kantin[0][3] * jml;
    cout << "Selected : Nasi Kuning Komplit Rp.8000\nJumlah : " << jml << endl << "Total Bayar : " << total << endl << "Nominal Pembayaran : ";
    cin >> pay;
    kembali = pay - total;
    cout << "\nNominal Pembayaran : " << pay << endl << "Kembalian : " << kembali;
    break;
    
    case 5:
    cout << "Selected : Mie Ayam Rp.10000\nMasukan Kuantitas Pembelian : ";
    cin >> jml;
    total = kantin[0][4] * jml;
    cout << "Selected : Mie Ayam Rp.10000\nJumlah : " << jml << endl << "Total Bayar : " << total << endl << "Nominal Pembayaran : ";
    cin >> pay;
    kembali = pay - total;
    cout << "\nNominal Pembayaran : " << pay << endl << "Kembalian : " << kembali;
    break;
      }
   //}
}   }
}