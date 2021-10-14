#include <iostream>

using namespace std;

int main(){
    int N,I1=1,I2=2,A=0,B=0,x;

    cin>> N;//número de vezes que o interruptor será apertado.

    for (int i=1;i<=N;i++){//loop pra cada vez que o interruptor for apertado

        cin>>x;//recebe x que representa qual  interruptor foi apertado.

        if(x==I1){//caso o interruptor seja o I1
            if ( A==0){ // se A estiver desligado ele liga(A recebe 1), senão, desliga(A recebe 0)
                A = 1;
                continue;
            }
            else{
                A=0;
                continue;
            }
        }

        else if(x==I2){//senão, se o inperruptor I2 for pressionado.
			//existem 4 possibilidades pra A e B:
             if ( A==0 and B==0 ){//se as duas estiverem ligadas
                A = 1;
                B = 1;
				 //as duas ligam
                continue;
            }
             if(A==1 and B == 0){//se apenas A estiver ligada
                A = 0;//A desliga
                B = 1;//B liga
                continue;
            }
             if ( A== 0 and B==1){ //Se apenas B estiver ligada
                B = 0;//B desliga 
                A =1;//A liga
                continue;
            }
             if(A==1 and B==1){//se Ambas estiverem ligadas
                A=0;
                B=0;
				 //ambas desligam
                continue;
            }
           
        }

    }
    cout << A, "\n";//imprime o estado de A
    cout << B,"\n";//imprime na outra linha o estado de B
    return 0;   
}