#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    int x, mb; //  mb adalah mau berapa
    float y, avg, total; // avg ( average) adalah rata-rata
    cout << "Program Eh… Program bla" << endl;
    cout << "Anda mau berapa? : ";
    cin >> mb;

    for (x = 1; x <= mb; x++)
    {
        cout << "Berapa : ";
        cin >> y;
        total += y;
    }
    cout << "Jumlah : " << total;
    avg = total / mb; // Menghitung rata - rata
    cout << "\nRata-ratanya adalah: " << avg;
}
