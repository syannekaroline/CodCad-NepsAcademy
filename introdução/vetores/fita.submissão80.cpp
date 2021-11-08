#include<iostream>

using namespace std;
int main(){
    int N;
    cin>>N;//A primeira linha da entrada contém apenas um inteiro N, indicando o número de quadrados da fita.
    int fita[N]={},dd[N]={},de[N]={},C[N]={};

    for(int i= 0;i<N;i++){
        cin>>C[i];//recebe a coloração de cada quadrado i(se 0 = tom 0, se -1=não colorido)
    }
    //determinar a distância entre um quadrado não colorido(-1) para o mais próximo de tom 0(0)      
    //a distância é o número mínimo de movimentos pra esquerda ou pra direita de um pro outro.      
    //o tom que o quadrado deve ser colorido é o mesmo da distância.
    //Se a distância for maior ou igual a 9, o quadrado deve ser colorido com o tom 9.

    for(int i=1 ;i<N;i++){ //percorre a fita (começa em 1 pois se C[0] for 0 não vai fazer diferença na contagem da esquerda pra direita

        if(C[i]==0){//se existir 0 da esquerda pra direita
            for(int i=0 ; i<N ;i++){      
                for(int x=i;x<N;x++){

                    if(C[x]!=0 ){///se o tom do quadrado for diferente de 0 ou o quadrado tiver índice N-1(último quadrado)
                        dd[i]++;//soma 1 à distância pra direita
                        if(dd[i]>9){//se a distância for maior ou igual a 9 
                            dd[i]=9;
                        }
                        if(x==N-1){
                            dd[i]=0;
                        }    
                    }else{
                        break;
                    }                  
                }
            }
            break;          
        }
    }

    for(int i = N-2 ;i>=0;i--){ //percorre a fita (começa no N-2 pois o C[N-1] não fará diferença na contagem da direita pra esquerda)

        if(C[i]==0){//se existir zero da direita pra esquerda:
            for(int i=0;i<N;i++){
                for(int x=i;x>=0; x--){//percorre da direita pra esquerda
                    if(C[x]!=0 ){//se o tom do quadrado for diferente de 0
                        de[i]=de[i]+1;//quando for diferente de 0 soma-se 1 a distância pra esquerda
                        if(de[i]>9){
                            de[i]=9;
                        }
                        if(x==0){
                            de[i]=0;
                            continue;
                        }
                    }else{
                        break;//quebra o loop de percorrer da direita pra esquerda
                    }
                }      
            }
            break;
        }
    }

    for(int i=0;i<N;i++){//compara qual a menor distância,da direita(dd) ou esquerda(de)
        if(dd[i]<=de[i] or i==0 or de[i]==0){
            if(i==N-1 or dd[i]==0){              
                fita[i]=de[i];
                continue;
            }
            fita[i]=dd[i];          
        }else{
            fita[i]=de[i];
        }
    }        
    for(int i=0;i<N; i++){//imprime o resultado final da fita colorida.
        cout<<fita[i]<<" ";
    }
    cout<<endl;
    return 0;
}