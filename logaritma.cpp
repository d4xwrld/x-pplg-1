#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int bil;
	int basis;
	int i=0;
	double hasil = 0;
	
	printf("Input Bilangan : ");
	scanf("%i", &bil);
	printf("Input Basis : ");
	scanf("%i", &basis);
	while (hasil<bil){
		hasil=pow(basis,i); 
		if (hasil == bil)
		{
			break;
		}i+=1;
	}
	printf("%iLOG%i = %i", basis, bil, i);
}
