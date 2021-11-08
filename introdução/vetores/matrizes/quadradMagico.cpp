#include <iostream>

using namespace std;

int main(){
	int N;
	cin>> N;//A primeira linha da entrada de cada caso de teste contém um inteiro N
	int A[N][N]={},Soma=0,SomaLinha[N]={},Resposta=0,SomaColuna[N]={},DiagonalPrincipal=0,DiagonalSecundaria=0;

	for(int i=0;i<N;i++){//percorre o quadrado
		for(int j=0;j<N;j++){

			cin>>A[i][j];
			Soma+= A[i][j];//S representa a soma de cada coluna do quadrado somando no final desse loop a soma de uma linha

			if(i==j){//se for um elemento da diagonal principal
				DiagonalPrincipal+=A[i][j];//a soma da diagonal principal, DP, recebe o elemento da diagonal
			}
		}

		SomaLinha[i]=Soma;//Somalinha[i] recebe a soma da linha completa.
		Soma=0;//como vai pra outra linha a S deve zerar pra reiniciar a soma da próx linha
		DiagonalSecundaria+= A[i][N-i-1];////soma da diagonal secundária 
	}

	for(int j=0;j<N;j++){//percorre o quadrado de cima pra baixo
		for(int i=0;i<N;i++){
			Soma+=A[i][j];//soma da coluna
		}
		SomaColuna[j]=Soma;//vetor SC armazena a no índice [j] a soma da coluna que(C)
		Soma=0;//C zera pra reiniciar a soma da próxima coluna
	}

	for(int i=1;i<N;i++){//percorre o quadrado possibilitando as comparações
		if( SomaLinha[0]==SomaLinha[i] &&//compara o valor das linhas tendo a soma da primeira linha como referência
			DiagonalPrincipal==DiagonalSecundaria &&//compara as diagonais
			SomaLinha[0]==SomaColuna[i] &&//compara o valor das colunas tendo a primeira linha como referência
			DiagonalPrincipal==SomaLinha[i] && //compada a diagonal principal com as linhas
			DiagonalSecundaria == SomaColuna[i]){//compara a diagonal secundária com as colunas
			Resposta=SomaLinha[0];//a resposta recebe o valor do quadrado mágico
		}else{
			Resposta=-1;//resposta recebe -1 (quadrado não mágico)
		}
	}
	cout<<Resposta;
	return 0;
}