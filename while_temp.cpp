#include <iostream>
using namespace std;

int main()
{
    int persen = 0;
    int a;
    cout << " Ketik 1 untuk Ya\nKetik 0 Untuk Tidak : ";
    cin >> a;
    if (a == 0)
    {
        cout << "WARNING : Program Canceled";
    }
    else if (a == 1)
    {
        while (persen < 100)
        {
            persen++;
            cout << "Loading..." << persen << "%" << endl;
            a++;
        }
    }
    cout << endl
         << "Done...";
}