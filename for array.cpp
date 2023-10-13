#include <iostream>
using namespace std;

int main()
{
	string cari;
	string pin[3] = {"123456", "654321", "098765"};
	int i;
	cout << pin[0] << endl;
	
	cout << "Cek Pin : ";
	cin >> cari;
	for(i=0;i<3;i++)
	{
	    if(pin[i]== cari)
	    {
	    cout << "Pin Ada" << endl;
	    break;
	    }
	}
	    if(i==3){
	        cout << "Pin Not Found!";
	    }
}