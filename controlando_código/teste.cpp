#include <iostream> // cin e cout

using namespace std;
 
int main(){
    
    for(int i=1;i<=100;i++){ // Repete uma sequência de comandos 100 vezes
        
        if(i % 7 == 0){ //Se o resto da divisão de i por 7 for igual a 0
            continue; //Ignore todos os outros comandos que seriam executados após o continue e siga para a próxima iteração, ou seja, para o próximo valor de i
        }

        cout<<i<<" ";
    }
    
    cout<<"\n";
    
    return 0;
}
