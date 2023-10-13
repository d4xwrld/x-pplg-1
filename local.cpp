#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Membuka file untuk menulis
    ofstream outfile(".data");

    // Menulis data ke file
    outfile << "Admin admin 2\n";

    // Menutup file
    outfile.close();

    // Membuka file untuk membaca
    ifstream infile(".data");

    // Membaca data dari file dan menampilkan di layar
    string username, password;
    int user_lvl;

    while (infile >> username >> password >> user_lvl)
    {
        
    }

}

