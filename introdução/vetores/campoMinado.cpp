#include <iostream>

using namespace std;
int main(){
    int N,M[50],saida;//contém o número de minas explosivas nos arredores de cada célula do tabuleiro.

    cin>>N;//A primeira linha da entrada contém um inteiro N indicando o número de células no tabuleiro.

    for(int i=0;i<N;i++){
        cin>>M[i];//recebe as infos de cada célula do tabuleiro nas próximas N linhas
    }

    for(int i=0;i<N;i++){

        saida=0;

        saida= M[i]+ saida;//soma-se a própria célula

        if(i<N-1){
            saida = saida +M[i+1];//soma a células posterior
        }

        if(i>0 ){
            saida=M[i-1]+saida;//e a célula anterior.
        }

        cout<<saida<<"\n";//A saída é composta por N linhas. A i-ésima linha da saída contém o número de minas explosivas nos arredores da i-ésima célula do tabuleiro.
    }
    return 0;
}