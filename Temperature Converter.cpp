#include <stdio.h>
#include <iostream>
#include <math.h>

int main()
{
  int pilihan;
  float kel, cel, fah;

  cout<< "----------------------TEMPERATURE CONVERTER------------------------"<<endl;
		cout<<"\n1. Celcius to Kelvin\n2. Celcius to Fahrenheit\n3. Fahrenheit to Celcius\n4. Fahrenheit to Kelvin\n5. Kelvin to Celcius\n6. Kelvin to Fahrenheit\n\nChoose Option : ";
		cin>>pilihan;
		
		if(pilihan==1)
		{
		cout<<"\nMasukkan suhu [°C] : ";
		cin>>cel;
		kel = cel + 273.15;
		cout<<"Result : "<<kel<<"°K";
		
		}
		else if(pilihan==2)
		{
			cout<<"\nMasukkan suhu [°C] : ";
		cin>>cel;
		fah =( 9.0/5.0 ) * cel + 32;
		cout<<"Result : "<<fah<<"°F";
		}
		else if(pilihan==3)
		{
			cout<<"\nMasukkan suhu [°F] : ";
		cin>>fah;
		cel = ( fah - 32) * 5/9;
		cout<<"Result : "<<cel<<"°C";
		}
		else if(pilihan==4)
		{
			cout<<"\nMasukkan suhu [°F] : ";
		cin>>fah;
		kel = ( fah - 32 ) * 5/9 + 273,15;
		cout<<"Result : "<<kel<<"°K";
		}
		else if(pilihan==5)
		{
			cout<<"\nMasukkan suhu [°K] : ";
		cin>>kel;
		cel = kel - 273,15;
		cout<<"Result : "<<cel<<"°C";
		}
		else if(pilihan==6)
		{
			cout<<"\nMasukkan suhu [°K] : ";
		cin>>kel;
		fah = (9.0 / 5) * (kel - 273.15) + 32;
		cout<<"Result : "<<fah<<"°F";
		}
}