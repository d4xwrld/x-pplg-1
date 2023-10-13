#include <iostream>
using namespace std;

int main()
{
	int pin = 123456;
	int pintry, fail = 0;
	
	while ( fail != 3){
	    cout << "masukkan pin : ";
	    cin >> pintry;
	    if ( pintry != pin){
	        cout << "Pin Salah!" << endl;
	        fail++;
	    }else {
	        cout << "menu";
	        return 0;
	    }
	}
}