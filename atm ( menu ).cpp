#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pin;
    string correctPin = "123456";
    int gagal = 0, input, tf, tgt, depo;

    while (pin != correctPin) {
        cout << "Masukkan PIN: ";
        cin >> pin;

        if (pin.length() > 6) {
            cout << "PIN harus maksimal 6 digit." << endl;
        } else {
            if (pin != correctPin) {
                cout << "PIN salah, coba lagi." << endl;
                gagal++;
            }
            if (gagal >= 3) {
                cout << "Anda salah memasukkan PIN 3 kali. Program selesai." << endl;
                return 0;
            }
        }
    }
    cout << "\033c";
    cout << "PIN benar." << endl
         << endl;
         do{
    cout << "----------------SIMPLE ATM-------------" << endl;
    cout << "Hint : Gunakan angka untuk memilih opsi" << endl
         << endl;
    cout << "1. Transfer" << endl
         << "2. Deposit" << endl
         << "3. Lainnya" << endl << "Opsi : ";
    cin >> input;
    cout << "\033c";

    switch (input)
    {
    case 1:
        cout << "1. Transfer antar bank" << endl
             << "2. Transfer sesama" << endl
             << "input here :";
        cin >> tf;
        if (tf == 1)
        {
            cout << "Transfer antar bank dikenai biaya admin sebesar Rp.5000/Transaksi";
        }
        else if (tf == 2)
        {
            cout << "Masukkan No Rekening tujuan anda : ";
            cin >> tgt;
        }
        else if (tf == 9)
        {
        }
        break;

    case 2:
        cout << "Masukkan Nominal uang yang akan di Deposit : Rp.";
        cin >> depo;
        cout << "Deposit sebesar Rp." << depo << " Berhasil!";
        break;

    case 3:
        cout << "soon!";
        break;
    }
    } while (input >3);
}
k;
    }
}