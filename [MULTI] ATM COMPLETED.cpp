#include <iostream>
using namespace std;

int main() {
    int akun[5][2] = {{111111, 10000000}, {222222,20000000}, {333333,30000000}, {444444, 40000000}, {555555, 50000000}};
    int trf, i, j, pintry;
    long long telp;
    char back, confirm;
    int withdraw, rek, rekening, bank_code;
    string bank[] = {"BCA", "BNI", "BRI"};
    int pulsa;
    int draw[] = {50000, 100000, 150000, 200000};
    int nomPulsa[] = {10000, 15000, 20000, 25000, 50000, 100000};
    int fail = 0, input, tf, tgt, depo;
 
    while (fail != 3) {
        cout << "Masukkan Pin : ";
        cin >> pintry;
        for(i = 0; i < 5; i++) {
            for(j = 0; j < 2; j++) {
                if(akun[i][j] == pintry) {
                    //start
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
                    akun[i][1] = akun [i][1] + depo;
                    cout << "Saldo akhir anda adalah Rp." << akun[i][1];
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
                    cout << "saldo Anda sebesar : " << akun[i][1];
                    cout << "Pilih nominal penarikan :" << endl
                         << "1. Rp." << draw[0] << endl
                         << "2. Rp." << draw[1] << endl
                         << "3. Rp." << draw[2] << endl
                         << "Input : ";
                    cin >> withdraw;
                    switch (withdraw)
                    {
                    case 1:
                        akun[i][1] = akun[i][1] - draw[0];
                        cout << "Tarik Tunai sebesar " << draw[0] << " Berhasil!" << endl
                             << "Sisa saldo anda sebesar : Rp." << akun[i][1];
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
                        akun[i][1] = akun[i][1] - draw[1];
                        cout << "Tarik Tunai sebesar " << draw[1] << " Berhasil!" << endl
                             << "Sisa saldo anda adalah : Rp." << akun[i][1];
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
                        akun[i][1] = akun[i][1] - draw[2];
                        cout << "Tarik Tunai sebesar " << draw[1] << " Berhasil!" << endl
                             << "Sisa saldo anda adalah : Rp." << akun[i][1];
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
            } while (input > 4    );
            return 0;
                    // kode deposit atau penarikan dapat ditempatkan di sini
                   
                }
            }
        }
        fail++;
        if(i == 5){
            cout << "Pin Not Found!" << endl;
        }
    }
    cout << "Anda telah memasukkan PIN yang salah sebanyak 3 kali." << endl;
    return 0;
}
