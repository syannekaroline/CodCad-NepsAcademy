#include <iostream>

using namespace std;

int main(){
    int N,V,V1,pontos=1, maiorPontuacao=0;

    cin>>N;

    for (int i = 1 ;i<=N;i++){

        cin>>V;
        if(i==1){
            V1=V;
            continue;
        }

        if(V1==V){

            pontos = pontos +1 ;
            
            if( maiorPontuacao <= pontos ){
                maiorPontuacao = pontos;
            }
        }
        else {
            pontos = 1 ;   
        }
        V1=V;
    }
    
    cout << maiorPontuacao ,"\n";
    return 0;
}