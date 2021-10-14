#include <iostream>

using namespace std;

int main(){
	
	int N,L,C,i= 1,Cquebrados = 0;//declarar número de bandejas N,de latas L, de copos C e i pra servir de contador no while por isso igual a 1  e o número de copos quebrados (Cquebrados) que inicia sendo 0 .	
	cin >>N;//recebe o número de bandejas 
	
	while(i<= N){//executa o comando entre chaves enquanto o contador(i) for menor que o número de bandejas recebidos.
		cin>>L>>C;//recebe o número de latas e copos em uma mesma linha N vezes(número de bandejas).
		
		if(L > C){//condição pra derrubar a bandeja
			Cquebrados = Cquebrados + C;//faz a soma de copos quebrados
		}
        i= i+1;//faz a contagem do número de bandejas e recebe L e C N vezes.
	}
    cout<< Cquebrados ,"\n";//imprime o número de copos quebrados
	return 0;
}