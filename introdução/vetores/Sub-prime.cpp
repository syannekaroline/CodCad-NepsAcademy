#include <iostream>

using namespace std;

int main(){
    int B,N, Ri[10000],x, D,C,V;
    char Resposta[21];

    do {
       cin>>B>>N;//A primeira linha de um caso de teste contém dois inteiros BB e NN, indicando respectivamente o número de bancos e o número de debêntures emitidas pelos bancos.

        for(int i=1; i<=B;i++){//Os bancos são identificados por inteiros entre 1 e BB
            cin>>Ri[i];//A segunda linha contém B inteiros Ri, separados por espaços, indicando as reservas monetárias de cada um dos B bancos.
        }

        for(int i=1;i<=B;i++){     
            for(x=1; x<=N;x++){//As N linhas seguintes contêm cada uma três inteiros separados por espaços:
                cin>>D;//um inteiro D, indicando o banco devedor
                cin>>C;//um inteiro C, indicando o banco credor
                cin>>V;// e um inteiro V, indicando o valor da debênture.
  
                Ri[D]=Ri[D]-V;
                Ri[C]=Ri[D]-V;
            
                if(Ri[i]<0){
                    Resposta[i]='S';
                }
                else{
                    Resposta[i]='N';
                }
            break;
            } 
        break;
        }        
        

    }while( N!=0 and B!= 0 );//O final da entrada é indicado por uma linha que contém apenas dois zeros, separados por um espaço em branco.
    
    for(int i=0;i<=B;i++){
        cout<< Resposta[i]<<"\n";
    }
    return 0;
}