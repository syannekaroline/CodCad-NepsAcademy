#include <iostream>//inclui bibliotecas pra receber e imprimir valores (cin>> e cout<<)
#include <cmath>//inclui bibliotefa com operações matemáticas.

using namespace std;

int main(){

    int N;//quantidade de números dos quais você terá que responder qual a raiz quadrada.
    double X;// números que serão calculadas as raízes quadradas

    cout.precision(4);
    cout.setf(ios::fixed);//comandos que indicam o número de casas de precisão do cout, nesse caso, 4 casas.

    cin >> N;//recebe N

    for(int i= 1 ;i<=N;i++){//faz a contagem do pra recebimento de números X, N vezes.
        cin>> X;//recebe X

        cout<< sqrt(X)<<"\n";//imprime a raiz quadrada de X
    }
    return 0;
}