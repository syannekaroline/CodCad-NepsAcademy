#include <iostream>

using namespace std;

int main(){
	int P1,C1,P2,C2, eq= 0 , deseE=-1, deseqD= 1;
	
	cin>>P1 >> C1>> P2 >> C2;
	
	if(P1*C1 == P2*C2){
		cout << eq, "\n";
	}

	if(P1*C1 >  P2*C2){
		cout << deseE , "\n";
	}

	if(P1*C1 < P2*C2){
        
		cout << deseqD , "\n";
	}
    return 0;
}