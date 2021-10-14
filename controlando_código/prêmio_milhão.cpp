#include <iostream>
using namespace std;

int main(){
    int N; //indica o número de dias que a lista contém.
    int A;//acessos no dia.
    int At = 0;// número de acesso total.
    int i=1;//contador do while par comparar o número dias da lista.
    int Ndias=1;//número de dias que foram necessários pra alcançar a meta de 10**6.
    
    cin>> N;//recebe o número de dias acessados

    while (i<=N){//executa os comandos entre chaves N vezes que executa as contas de acessos por dia 

        cin>>A;//recebe o acesso no dia

        At = At + A;//executa a soma do total de acessos i dias

        if(At < 1000000){//se o total de acessos for menor que 1
            Ndias = Ndias + 1;//é feita a contagem de dias que foram necessários pra atingir a meta.
        }

        i= i+1;//faz a contagem de dias de acesso.
    }
    cout << Ndias,"\n";//imprime o número de dias que foram necessários pra atingir a meta.
    return 0;
}