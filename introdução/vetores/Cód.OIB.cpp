#include <iostream>

using namespace std;

int main(){
    int N;//tamanho da sequência
    int quantidade=0;//quantas vezes o padrão "100" aparece na sequência.
    int bits[10000];//sequencia de 0 e 1;

    cin>>N;//A primeira linha da entrada contém um inteiro N

    for(int i=1;i<=N;i++){
        cin>>bits[i];//A segunda linha contém a sequência de NN zeros e uns, separados por espaço em branco.
    }

    for(int i=1; i<=N; i++){//pra percorrer o vetor de bits

        if(bits[i-1]==1){

            if(bits[i]==0){

                if(i==N){
                    break;//se for o último bit o loop deve terminar.
                }
                else if(bits[i+1]==0){
                    quantidade+=1;
                }//se a sequência for = 100, soma-se a variável "quantidade"
                
            }

        }
    }

    cout<<quantidade<<"\n";//Seu programa deve imprimir um inteiro, quantas vezes o padrão "100" aparece na sequência.
    return 0;
    
}