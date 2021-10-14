#include <iostream>

using namespace std;
int main(){
	int X;//Dado um número inteiro XX, encontre todos os divisores de X.

    cin>>X;//A entrada consiste de apenas uma linha contendo o número X

    for (int i=1;i<=X;i++){//loop que faz a contagem dos dividendos de X.
        
        if(X%i==0){//se o número for divisível por X.(resto da divisão é igual a 0)
            cout<< i<<" ";//imprime o divisor
        }
    }
    return 0;
}