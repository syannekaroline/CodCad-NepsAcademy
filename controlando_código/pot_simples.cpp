#include <iostream>//inclui bibliotecas pra receber e imprimir valores (cin>> e cout<<)
#include <cmath>//inclui biblioteca com operações matemáticas.

using namespace std;

int main(){
    double x,y;//declara dois números reais.
    cout.precision(4);
    cout.setf(ios::fixed);//define 4 casas de precisão de pois da vírgula pro cout.

    cin>>x>>y;//A entrada é composta por apenas uma linha que contem dois números reais, x e y.

    cout<< pow(x,y)<<"\n";//imprime a potencia de x^y.
    return 0;
}