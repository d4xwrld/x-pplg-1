#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int user, jari, tinggi;
	float phi, hasil;
	phi = 3.14;// Pengdeklarasian Variabel

	cout << "Menghitung Volume Tabung dan Kerucut\nMenu :\n1. Volume Tabung\n2. Volume Kerucut\n Pilih 1 atau 2 : "; // Nama Program + Input Panjang
	cin >> user;
	if(user==1)
	{
	cout << "1. Menghitung Volume Tabung\nMasukkan Jari-Jari : ";
	cin >> jari; // Menyimpan Data panjang
	cout << "Masukkan Tinggi : "; // Input Lebar
	cin >> tinggi; // Menyimpan Data Lebar
	hasil = phi*jari*jari*tinggi; //Menghitung Hasil
	cout << "Jadi, Volume Tabung dari jari-jari " << jari << " dan tinggi " << tinggi << " adalah " << hasil;
	} else if(user==2) {
	cout << "2. Menghitung Volume Kerucut\nMasukkan Rusuk : "; // Menampilkan hasil
	cin >> jari;
	cout << "Masukkan Tinggi : ";
	cin >> tinggi;
	hasil = phi*jari*jari*tinggi/3;
	cout << "Jadi, Volume kerucut dari jari-jari " << jari << " dan tinggi " << tinggi << " adalah " << hasil;	
	} else {
		cout << "ERROR, masukkan input yang benar";
	}
}
