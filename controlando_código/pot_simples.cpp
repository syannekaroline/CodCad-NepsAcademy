#include <iostream>//inclui bibliotecas pra receber e imprimir valores (cin>> e cout<<)
#include <cmath>//inclui bibliotefa com operações matemáticas.

using namespace std;

int main(){
    double x,y;
    cout.precision(4);
    cout.setf(ios::fixed);

    cin>>x>>y;

    cout<< pow(x,y)<<"\n";
    return 0;
}