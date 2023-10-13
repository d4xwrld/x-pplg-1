#include <iostream>
#include <string>
using namespace std;

int main()
{
    int pin = 123456;
    int pintry,trf;
    char back;
    int rek, rekening, bank_code;
    string bank[] = {"BCA", "BNI", "Cimb Niaga", "BRI"};
    int fail = 0, input, tf, tgt, depo;

    while (fail != 3)
    {
        cout << "Masukkan Pin : ";
        cin >> pintry;
        if (pintry != pin)
        {
            cout << "PIN SALAH!" << endl;
            fail++;
        }
        else
        {
            cout << "\033c";
            cout << "PIN benar." << endl
                 << endl;
            do
            {
                cout << "----------------SIMPLE ATM-------------" << endl;
                cout << "Hint : Gunakan angka untuk memilih opsi" << endl
                     << endl;
                cout << "1. Transfer" << endl
                     << "2. Deposit" << endl
                     << "3. Lainnya" << endl
                     << "Opsi : ";
                cin >> input;
                cout << "\033c";

                switch (input)
                {
                case 1:
                    cout << "1. Transfer antar bank" << endl << "2. Transfer sesama" << endl << "\n9. Kembali ke Menu utama" << endl << "input here :";
                    cin >> tf;
                    cout << "\033c";
                    if (tf == 1)
                    {
                        cout << "Transfer antar bank dikenai biaya admin sebesar Rp.5000/Transaksi" << endl
                             << "Pilih Bank :"
                             << "\n1. BCA\n2. BNI\n3. BRI\n4. Lainnya\n\n9.Ke Menu Awal\nInput here : ";
                        cin >> rek;
                        switch (rek)
                        {
                        case 1:
                            cout << "Transaksi ke " << bank[0] << ".\nMasukkan No Rekening : ";
                            cin >> rekening;
                            cout << "Masukkan nominal uang yang akan ditransfer : Rp.";
                            cin >> trf;
                            cout << "Transfer ke " << rekening << " sebesar Rp." << trf << " Berhasil!";
                            cout << "\nKembali ke Menu awal? ( y/n ) : ";
                            cin >> back;
                            if(back == 'y'){
                                input = 5;
                                cout << "\033c";
                            }else{
                                return 0;
                            }
                            break;
                        case 2:
                            cout << "Transaksi ke " << bank[1] << ".\nMasukkan No Rekening : ";
                            cin >> rekening;
                            cout << "Masukkan nominal uang yang akan ditransfer : Rp.";
                            cin >> trf;
                            cout << "Transfer ke " << rekening << " sebesar Rp." << trf << " Berhasil!";
                            cout << "\nKembali ke Menu awal? ( y/n ) : ";
                            cin >> back;
                            if(back == 'y'){
                                input = 5;
                                cout << "\033c";
                            }else{
                                return 0;
                            }
                            break;
                        case 3:
                            cout << "Transaksi ke " << bank[2] << ".\nMasukkan No Rekening : ";
                            cin >> rekening;
                            cout << "Masukkan nominal uang yang akan ditransfer : Rp.";
                            cin >> trf;
                            cout << "Transfer ke " << rekening << " sebesar Rp." << trf << " Berhasil!";
                            cout << "\nKembali ke Menu awal? ( y/n ) : ";
                            cin >> back;
                            if(back == 'y'){
                                input = 5;
                                cout << "\033c";
                            }else{
                                return 0;
                            }
                            break;
                        case 4:
                            cout << "Masukkan Kode Bank : ";
                            cin >> bank_code;
                            cout << "Masukkan No Rekening : ";
                            cin >> rekening;
                            cout << "Masukkan nominal uang yang akan ditransfer : Rp.";
                            cin >> trf;
                            cout << "Transfer ke " << rekening << " sebesar Rp." << trf << " Berhasil!";
                            cout << "\nKembali ke Menu awal? ( y/n ) : ";
                            cin >> back;
                            if(back == 'y'){
                                input = 5;
                                cout << "\033c";
                            }else{
                                return 0;
                            }
                            break;
                            case 9:
                            input = 5;
                            break;
                        }
                    }
                    else if (tf == 2)
                    {
                        cout << "Masukkan No Rekening tujuan anda : ";
                        cin >> tgt;
                        cout << "Masukkan nominal uang yang akan ditransfer : Rp.";
                            cin >> trf;
                            cout << "Transfer ke " << tgt << " sebesar Rp." << trf << " Berhasil!"; 
                    break;
                    }
                    else if (tf ==9 ){
                        input = 5;
                        break;
                    }
                case 2:
                    cout << "Masukkan Nominal uang yang akan di Deposit : Rp.";
                    cin >> depo;
                    cout << "Deposit sebesar Rp." << depo << " Berhasil!";
                    break;

                case 3:
                    cout << "soon!";
                    break;
                }
            } while (input > 3);
            return 0;
        }
    }
}
