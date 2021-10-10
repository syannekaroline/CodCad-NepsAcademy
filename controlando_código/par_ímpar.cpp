#include <iostream>

using namespace std;

int main (){
	int dB, dC;

	cin >> dB;
	cin >> dC;
	
	if ( ((dB + dC) % 2)==0 ) {
		cout << "Bino";
	}
	else{
		cout<< "Cino";
	}
	return 0;
}