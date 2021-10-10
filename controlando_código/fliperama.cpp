#include <iostream>

using namespace std;

int main(){
	int P, R;
	
	cin>> P >> R;
	
	if( P==1 and R==1){
		cout<< "A";
	}
	else if( P==0){
		cout <<"C\n";
	}
	else{
		cout<<"B\n";
	}
	return 0;
}