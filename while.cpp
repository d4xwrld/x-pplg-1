#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int j  = 69;
    int num;
    double avg, total = 0;

    while (num != j)
    {
        cout << "Masukkan angka ke " << i << ": ";
        cin >> num;
        if (num != j)
        {
            total += num;
            i++;
        }
    }
    cout << "Jumlah : " << total << endl;
    avg = total / (i - 1); // Menghitung rata - rata
    cout << "Rata-ratanya adalah: " << avg;
}