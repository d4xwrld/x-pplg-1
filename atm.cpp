#include <iostream>
#include <string>
using namespace std;
    
int main() {
    string pin;
    string correctPin = "123456";
    int gagal;

    while (pin != correctPin) {
        cout << "Masukkan PIN: ";
        cin >> pin;

        if (pin.length() > 6) {
            cout << "PIN harus maksimal 6 digit." << endl;
        } else {
            gagal++;
            if (gagal >= 3) {
                cout << "Anda salah memasukkan PIN 3 kali. Program selesai." << endl;
                return 0;
            } else if (pin != correctPin) {
                cout << "PIN salah, coba lagi." << endl;
            }
        }
    }
    cout << "\033c";
    cout << "PIN benar." << endl << endl;
    cout << "SIMPLE ATM";
  
}
