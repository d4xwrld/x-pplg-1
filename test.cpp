#include <iostream>
using namespace std;

int main(){
	string input[5][3]={{"Kantin 1","Ayam Bakar + Nasi","15000"},{"Kantin 2","Ayam Crispy + Sambal","17000"},{"Kantin 3","Ayam Geprek","20000"},{"Kantin 4","Ayam Goreng","14000"},{"Kantin 5","Kari Ayam","18000"}};
	int pil=0, b, i, pk, th, km;
	string pk_str;
	
	cout<< "\n =====KANTIN=====\n";
	cout<< "1. Mbah Jojo\n2. Mbah Gigi\n3. Bu Rara\n4. Pak Dodi\n5. Mang Jang\n";
	cout<< "Input: ";
	cin>> pil;
	//for (i=0;i<5;i++)
		if (pil==1){
				cout<<"\n	Ayam Bakar + Nasi\n Harga		: Rp.15.000\n Paket		: ";
				cin>>pk_str;
				int pk = stoi(pk_str);
				th = pk * stoi(input[0][2]);
				cout<<" Total Harga	: "<< th<< endl;
				cout<<" Bayar		: ";
				cin>> b;
				km= b-th;
				cout<<" Kembali	: "<< km <<endl;
			return 0;
		}
}