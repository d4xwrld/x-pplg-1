#include <iostream>
using namespace std;

int main()
{
    double paket, jumlah, harga, diskon;
    int harga1 = 10000;
    int harga2 = 50000;
    int harga3 = 40000;
    cout << "1. Pahe 1 Rp." << harga1;
    cout << "\n2. Pahe 2 Rp." << harga2;
    cout << "\n3. Pahe 3 Rp." << harga3;
    cout << "\nPilih Paket : ";
    cin >> paket;

    if (paket == 1)
    {
        cout << "Jumlah Beli : ";
        cin >> jumlah;
        harga = harga1 * jumlah;
        if (jumlah >= 10)
        {
            diskon = harga - (harga1 * 0.1);
            cout << "Diskon menjadi : Rp." << diskon;
        }
        else
        {
            cout << "total : Rp." << harga;
        }
    }
    if (paket == 2)
    {
        cout << "Jumlah Beli : ";
        cin >> jumlah;
        harga = harga2 * jumlah;
        if (jumlah >= 10)
        {
            diskon = harga - (harga2 * 0.1);
            cout << "Diskon menjadi : Rp." << diskon;
        }
        else
        {
            cout << "total : Rp." << harga;
        }
        if (paket == 3)
        {
            cout << "Jumlah Beli : ";
            cin >> jumlah;
            harga = harga3 * jumlah;
            if (jumlah >= 10)
            {
                diskon = harga - (harga3 * 0.1);
                cout << "Diskon menjadi : Rp." << diskon;
            }
            else
            {
                cout << "total : Rp." << harga;
            }
        }
    }
    else
        cout << "Paket Invalid!";
}