#include <iostream>
#include <string>
using namespace std;

int main()
{
    int pin = 123456;
    int pintry, trf;
    long long telp;
    char back, confirm;
    int withdraw, rek, rekening, bank_code;
    string bank[] = {"BCA", "BNI", "BRI"};
    int saldo = 10000000;
    int pulsa;
    int draw[] = {50000, 100000, 150000, 200000};
    int nomPulsa[] = {10000, 15000, 20000, 25000, 50000, 100000};
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
            system("cls");
            cout << "PIN benar." << endl
                 << endl;
            do
            {
                cout << "----------------SIMPLE ATM-------------" << endl;
                cout << "Hint : Gunakan angka untuk memilih opsi" << endl
                     << endl;
                cout << "1. Transfer" << endl
                     << "2. Deposit" << endl
                     << "3. Tarik Tunai" << endl
                     << "4. Isi Pulsa" << endl
                     << "Opsi : ";
                cin >> input;
                system("cls");

                switch (input)
                {
                case 1:
                    cout << "1. Transfer antar bank" << endl
                         << "2. Transfer sesama" << endl
                         << "\n9. Kembali ke Menu utama" << endl
                         << "input here :";
                    cin >> tf;
                    system("cls");
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
                            if (back == 'y')
                            {
                                input = 5;
                                system("cls");
                            }
                            else
                            {
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
                            if (back == 'y')
                            {
                                input = 5;
                                system("cls");
                            }
                            else
                            {
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
                            if (back == 'y')
                            {
                                input = 5;
                                system("cls");
                            }
                            else
                            {
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
                            if (back == 'y')
                            {
                                input = 5;
                                system("cls");
                            }
                            else
                            {
                                return 0;
                            }
                            break;
                        }
                    case 9:
                        input = 5;
                        break;
                    }
                    else if (tf == 2)
                    {
                        cout << "Masukkan No Rekening tujuan anda : ";
                        cin >> tgt;
                        cout << "Masukkan nominal uang yang akan ditransfer : Rp.";
                        cin >> trf;
                        cout << "Transfer ke " << tgt << " sebesar Rp." << trf << " Berhasil!";
                        cout << "\nKembali ke Menu awal? ( y/n ) : ";
                        cin >> back;
                        if (back == 'y')
                        {
                            input = 5;
                            system("cls");
                        }
                        else
                        {
                            return 0;
                        }
                        break;
                    }
                    else if (tf == 9)
                    {
                        input = 5;
                        break;
                    }
                case 2:
                    cout << "Masukkan Nominal uang yang akan di Deposit : Rp.";
                    cin >> depo;
                    cout << "Deposit sebesar Rp." << depo << " Berhasil!" << endl;
                    saldo = saldo + depo;
                    cout << "Saldo akhir anda adalah Rp." << saldo;
                    cout << "\nKembali ke Menu awal? ( y/n ) : ";
                    cin >> back;
                    if (back == 'y')
                    {
                        input = 5;
                        system("cls");
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 3:
                    cout << "Saldo Anda sebesar : " << saldo;
                    cout << "Pilih nominal penarikan :" << endl
                         << "1. Rp." << draw[0] << endl
                         << "2. Rp." << draw[1] << endl
                         << "3. Rp." << draw[2] << endl
                         << "Input : ";
                    cin >> withdraw;
                    switch (withdraw)
                    {
                    case 1:
                        saldo = saldo - draw[0];
                        cout << "Tarik Tunai sebesar " << draw[0] << " Berhasil!" << endl
                             << "Sisa saldo anda sebesar : Rp." << saldo;
                        cout << "\nKembali ke Menu awal? ( y/n ) : ";
                        cin >> back;
                        if (back == 'y')
                        {
                            input = 5;
                            system("cls");
                        }
                        else
                        {
                            return 0;
                        }
                        break;
                    case 2:
                        saldo = saldo - draw[1];
                        cout << "Tarik Tunai sebesar " << draw[1] << " Berhasil!" << endl
                             << "Sisa saldo anda adalah : Rp." << saldo;
                        cout << "\nKembali ke Menu awal? ( y/n ) : ";
                        cin >> back;
                        if (back == 'y')
                        {
                            input = 5;
                            system("cls");
                        }
                        else
                        {
                            return 0;
                        }
                        break;
                    case 3:
                        saldo = saldo - draw[2];
                        cout << "Tarik Tunai sebesar " << draw[1] << " Berhasil!" << endl
                             << "Sisa saldo anda adalah : Rp." << saldo;
                        cout << "\nKembali ke Menu awal? ( y/n ) : ";
                        cin >> back;
                        if (back == 'y')
                        {
                            input = 5;
                            system("cls");
                        }
                        else
                        {
                            return 0;
                        }
                        break;
                    }
                case 4:
                    cout << "Isi Pulsa\nMasukkan no telepon : ";
                    cin >> telp;
                    cout << "Pilih nominal :"
                         << "\n1." << nomPulsa[0] << "\n2." << nomPulsa[1] << "\n3." << nomPulsa[2] << "\n4." << nomPulsa[3] << "\n5." << nomPulsa[4] << "\n6." << nomPulsa[5] << "\nInput Here : ";
                    cin >> pulsa;
                    switch (pulsa)
                    {
                    case 1:
                        cout << "Anda akan mengisi pulsa sebesar" << nomPulsa[0] << "Ke Nomor " << telp << endl
                             << "Apakah anda yakin? (y/n)";
                        cin >> confirm;
                        if (confirm == 'y')
                        {
                            cout << "Pengisian Berhasil!";
                        }
                        else if (confirm == 'n')
                        {
                            cout << "Pengisian dibatalkan.";
                        }
                        cout << "\nKembali ke Menu awal? ( y/n ) : ";
                        cin >> back;
                        if (back == 'y')
                        {
                            input = 5;
                            system("cls");
                        }
                        else
                        {
                            return 0;
                        }
                        break;
                    case 2:
                        cout << "Anda akan mengisi pulsa sebesar" << nomPulsa[1] << "Ke Nomor " << telp << endl
                             << "Apakah anda yakin? (y/n)";
                        cin >> confirm;
                        if (confirm == 'y')
                        {
                            cout << "Pengisian Berhasil!";
                        }
                        else if (confirm == 'n')
                        {
                            cout << "Pengisian dibatalkan.";
                        }
                        cout << "\nKembali ke Menu awal? ( y/n ) : ";
                        cin >> back;
                        if (back == 'y')
                        {
                            input = 5;
                            system("cls");
                        }
                        else
                        {
                            return 0;
                        }
                        break;
                    case 3:
                        cout << "Anda akan mengisi pulsa sebesar" << nomPulsa[2] << "Ke Nomor " << telp << endl
                             << "Apakah anda yakin? (y/n)";
                        cin >> confirm;
                        if (confirm == 'y')
                        {
                            cout << "Pengisian Berhasil!";
                        }
                        else if (confirm == 'n')
                        {
                            cout << "Pengisian dibatalkan.";
                        }
                        cout << "\nKembali ke Menu awal? ( y/n ) : ";
                        cin >> back;
                        if (back == 'y')
                        {
                            input = 5;
                            system("cls");
                        }
                        else
                        {
                            return 0;
                        }
                        break;
                    case 4:
                        cout << "Anda akan mengisi pulsa sebesar" << nomPulsa[3] << "Ke Nomor " << telp << endl
                             << "Apakah anda yakin? (y/n)";
                        cin >> confirm;
                        if (confirm == 'y')
                        {
                            cout << "Pengisian Berhasil!";
                        }
                        else if (confirm == 'n')
                        {
                            cout << "Pengisian dibatalkan.";
                        }
                        cout << "\nKembali ke Menu awal? ( y/n ) : ";
                        cin >> back;
                        if (back == 'y')
                        {
                            input = 5;
                            system("cls");
                        }
                        else
                        {
                            return 0;
                        }
                        break;
                    case 5:
                        cout << "Anda akan mengisi pulsa sebesar " << nomPulsa[4] << " Ke Nomor " << telp << endl
                             << "Apakah anda yakin? (y/n)";
                        cin >> confirm;
                        if (confirm == 'y')
                        {
                            cout << "Pengisian Berhasil!";
                        }
                        else if (confirm == 'n')
                        {
                            cout << "Pengisian dibatalkan.";
                        }
                        cout << "\nKembali ke Menu awal? ( y/n ) : ";
                        cin >> back;
                        if (back == 'y')
                        {
                            input = 5;
                            system("cls");
                        }
                        else
                        {
                            return 0;
                        }
                        break;
                    case 6:
                        cout << "Anda akan mengisi pulsa sebesar" << nomPulsa[5] << " Ke Nomor 0" << telp << endl
                             << "Apakah anda yakin? (y/n)";
                        cin >> confirm;
                        if (confirm == 'y')
                        {
                            cout << "Pengisian Berhasil!";
                        }
                        else if (confirm == 'n')
                        {
                            cout << "Pengisian dibatalkan.";
                        }
                        cout << "\nKembali ke Menu awal? ( y/n ) : ";
                        cin >> back;
                        if (back == 'y')
                        {
                            input = 5;
                            system("cls");
                        }
                        else
                        {
                            return 0;
                        }
                        break;
                    }
                }
            } while (input >= 5);
            return 0;
        }
    }
}ut >= 5);
            return 0;
        }
    }
}