#include <iostream>
using namespace std;

int main()
{
    double paket, jumlah, total, diskon, bayar;
    int harga[] = {10000, 50000, 40000};
    cout << "Selamat Datang!\nBeli 10 paket dapat potongan harga 10% lho!\n";
    do {
    cout << "\n*Hint : Gunakan Angka 1, 2, 3.\n";
    cout << "1. Pahe 1 Rp." << harga[0];
    cout << "\n2. Pahe 2 Rp." << harga[1];
    cout << "\n3. Pahe 3 Rp." << harga[2];
    cout << "\nPilih Paket : ";
    cin >> paket;
    
    if (paket == 1)
            {
                cout << "Jumlah Beli : ";
                cin >> jumlah;
                total = harga[0] * jumlah;
                if (jumlah >= 10)
                {
                    diskon = total - (harga[0] * 0.1);
                    cout << "Diskon menjadi : Rp." << diskon;
                    cout << "\nMasukkan nominal pembayaran anda : Rp.";
                    cin >> bayar;
                    if (bayar < diskon)
                    {
                        total = bayar - diskon;
                        cout << "Maaf, uang anda kurang sebesar : Rp." << total;
                    }
                    else
                    {
                        bayar = bayar - diskon;
                        cout << "Terima Kasih, kembalian anda sebesar : Rp." << bayar;
                    }
                }
                else
                {
                    cout << "total yang harus dibayar : Rp." << total;
                    cout << "\nMasukkan nominal pembayaran anda : Rp.";
                    cin >> bayar;
                    if (bayar < total)
                    {
                        total = bayar - total;
                        cout << "Maaf, uang anda kurang sebesar : Rp." << total;
                    }
                    else
                    {
                        bayar = bayar - total;
                        cout << "Terima Kasih, kembalian anda sebesar : Rp." << bayar;
                    }
                }
            }
        if (paket == 2)
            {
                cout << "Jumlah Beli : ";
                cin >> jumlah;
                total = harga[1] * jumlah;
                if (jumlah >= 10)
                {
                    diskon = total - (harga[1] * 0.1);
                    cout << "Diskon menjadi : Rp." << diskon;
                    cout << "\nMasukkan nominal pembayaran anda : Rp.";
                    cin >> bayar;
                    if (bayar < diskon)
                    {
                        total = bayar - diskon;
                        cout << "Maaf, uang anda kurang sebesar : Rp." << total;
                    }
                    else
                    {
                        bayar = bayar - diskon;
                        cout << "Terima Kasih, kembalian anda sebesar : Rp." << bayar;
                    }
                }
                else
                {
                    cout << "total yang harus dibayar : Rp." << total;
                    cout << "\nMasukkan nominal pembayaran anda : Rp.";
                    cin >> bayar;
                    if (bayar < total)
                    {
                        total = bayar - total;
                        cout << "Maaf, uang anda kurang sebesar : Rp." << total;
                    }
                    else
                    {
                        bayar = bayar - total;
                        cout << "Terima Kasih, kembalian anda sebesar : Rp." << bayar;
                    }
                }
            }
            if (paket == 3)
            {
                cout << "Jumlah Beli : ";
                cin >> jumlah;
                total = harga[2] * jumlah;
                if (jumlah >= 10)
                {
                    diskon = total - (harga[2] * 0.1);
                    cout << "Diskon menjadi : Rp." << diskon;
                    cout << "\nMasukkan nominal pembayaran anda : Rp.";
                    cin >> bayar;
                    if (bayar < diskon)
                    {
                        total = bayar - diskon;
                        cout << "Maaf, uang anda kurang sebesar : Rp." << total;
                    }
                    else
                    {
                        bayar = bayar - diskon;
                        cout << "Terima Kasih, kembalian anda sebesar : Rp." << bayar;
                    }
                }
                else
                {
                    cout << "total yang harus dibayar : Rp." << total;
                    cout << "\nMasukkan nominal pembayaran anda : Rp.";
                    cin >> bayar;
                    if (bayar < total)
                    {
                        total = bayar - total;
                        cout << "Maaf, uang anda kurang sebesar : Rp." << total;
                    }
                    else
                    {
                        bayar = bayar - total;
                        cout << "Terima Kasih, kembalian anda sebesar : Rp." << bayar;
                    }
                }
            }
    } while (paket > 3 || paket == 0);
} 