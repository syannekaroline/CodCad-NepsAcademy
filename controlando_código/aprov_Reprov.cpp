#include <iostream>

using namespace std;

int main(){
	float notaA,notaB;
	
	cin>>notaA>>notaB;
	
	if((notaA+notaB)/2 >=7 ){
		cout << "Aprovado";
	}
	
	else if((notaA+notaB)/2 >=4){
		cout <<"Recuperacao";
	}
	else if((notaA+notaB)/2 < 4){
		cout<< "Reprovado";
	}
	return 0;
}