#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int user, user1, jari, tinggi;
	int i1, n;
	int bil, basis;
	int i=0;
	double hasil1=0;
	bool prima= true;
	float hasil, kel, cel, fah;
	cout<< "---------------------------MATH TOOLS------------------------------"<<endl;
	cout << "\nMenu :\n1. Volume Tabung\n2. Volume Kerucut\n3. Logaritma\n4. Prima Checker\n5. Temperature Converter\n\n Choose Option : "; // Nama Program + Input Panjang
	cin >> user;
	if(user==1)
	{
		cout << "\n----------------------MENGHITUNG VOLUME TABUNG---------------------\nMasukkan Jari-Jari : ";
		cin >> jari; // Menyimpan Data panjang
		cout << "Masukkan Tinggi : "; // Input Lebar
		cin >> tinggi; // Menyimpan Data Lebar
		hasil = 3.14 *jari*jari*tinggi; //Menghitung Hasil
		cout << "Jadi, Volume Tabung dari jari-jari " << jari << " dan tinggi " << tinggi << " adalah " << hasil;
	}	else if(user==2) {
	cout << "\n----------------------MENGHITUNG VOLUME KERUCUT--------------------\nMasukkan Rusuk : "; // Menampilkan hasil
	cin >> jari;
	cout << "Masukkan Tinggi : ";
	cin >> tinggi;
	hasil = 3.14*jari*jari*tinggi/3;
	cout << "Jadi, Volume kerucut dari jari-jari " << jari << " dan tinggi " << tinggi << " adalah " << hasil;	
	}
	else if (user==3)
	{
		printf("\n------------------------Menghitung Logaritma-----------------------");
		printf("Input Bilangan : ");
	scanf("%i", &bil);
	printf("Input Basis : ");
	scanf("%i", &basis);
	while (hasil1<bil){
		hasil1=pow(basis,i); 
		if (hasil1 == bil)
		{
			break;
		}i+=1;
	}
	printf("%iLOG%i = %i", basis, bil, i);
	}
		else if (user==4)
	{
		cout<< "----------------------BILANGAN PRIMA CHECKER-----------------------\n\n";
  cout << "Masukkan Angka : ";
  cin >> n;

  if (n == 0 || n == 1) {
    prima = false;
  }

  for (i = 2; i <= n/2; ++i1) {
    if (n % i1 == 0) {
      prima= false;
      break;
    }
  }

  if (prima)
    cout << "\n" << n <<  " adalah bilangan Prima";
  else
    cout << "\n" << n << " bukan bilangan Prima";
	}
	else if(user==5)
	{
		cout<< "----------------------TEMPERATURE CONVERTER------------------------"<<endl;
		cout<<"\n1. Celcius to Kelvin\n2. Celcius to Fahrenheit\n3. Fahrenheit to Celcius\n4. Fahrenheit to Kelvin\n5. Kelvin to Celcius\n6. Kelvin to Fahrenheit\n\nChoose Option : ";
		cin>>user1;
		
		if(user1==1)
		{
		cout<<"\nMasukkan suhu [°C] : ";
		cin>>cel;
		kel = cel + 273.15;
		cout<<"Result : "<<kel<<"°K";
		
		}
		else if(user1==2)
		{
			cout<<"\nMasukkan suhu [°C] : ";
		cin>>cel;
		fah =( 9.0/5.0 ) * cel + 32;
		cout<<"Result : "<<fah<<"°F";
		}
		else if(user1==3)
		{
			cout<<"\nMasukkan suhu [°F] : ";
		cin>>fah;
		cel = ( fah - 32) * 5/9;
		cout<<"Result : "<<cel<<"°C";
		}
		else if(user1==4)
		{
			cout<<"\nMasukkan suhu [°F] : ";
		cin>>fah;
		kel = ( fah - 32 ) * 5/9 + 273,15;
		cout<<"Result : "<<kel<<"°K";
		}
		else if(user1==5)
		{
			cout<<"\nMasukkan suhu [°K] : ";
		cin>>kel;
		cel = kel - 273,15;
		cout<<"Result : "<<cel<<"°C";
		}
		else if(user1==6)
		{
			cout<<"\nMasukkan suhu [°K] : ";
		cin>>kel;
		fah = (9.0 / 5) * (kel - 273.15) + 32;
		cout<<"Result : "<<fah<<"°F";
		}
	}
	else {
		cout << "ERROR, masukkan input yang benar";
	}
}