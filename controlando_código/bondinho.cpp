#include <iostream>

using namespace std;

int main(){
	int A,M;
	char S='S';
	char N = 'N';
	
	cin>>A;
	cin>>M;
	
	if(1<=A and A<= 50 and 1<=M and M<=50){
		if((A+M) <=50){
			cout<< S;
		}
		else{
			cout<< N;
		}
	return 0;
	}
}