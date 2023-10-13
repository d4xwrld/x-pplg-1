#include <iostream>
using namespace std;

int main() {
  double paket, jumlah, harga;
  int harga1 = 10000; 
  int harga2 = 50000;
  int harga3 = 40000;
  cout << "1. Pahe 1 " << harga1;
  cout << "\n2. Pahe 2 " << harga2;
  cout << "\n3. Pahe 3 " << harga3;
  cout << "\nPilih Paket : ";
  cin >> paket;
  
  if ( paket == 1){
    cout << "Jumlah Beli : ";
    cin >> jumlah;
    harga = harga1 * jumlah;
    cout << "total" << harga;
    } 
   else if ( paket == 2){
   cout << "Jumlah Beli : ";
    cin >> jumlah;
    harga = harga2 * jumlah;
    cout << "total : " << harga;
   }
   else if ( paket == 3){
       cout << "Jumlah Beli : ";
    cin >> jumlah;
    harga = harga3 * jumlah;
    cout << "total : "  << harga;
   }else
    cout << "Paket Invalid!";
}