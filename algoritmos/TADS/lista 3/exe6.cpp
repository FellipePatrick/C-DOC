/*
	Em um jogo de adivinha��o, o jogador deve descobrir um n�mero entre 1 e 10 usando at� tr�s tentativas.
	A cada tentativa o jogador � informado se o n�mero foi descoberto, se ele � maior ou menor do que a
	tentativa. Se ap�s tr�s tentativas o jogador n�o descobrir o n�mero, ent�o ele perde o jogo. Fa�a um
	algoritmo que implemente esse jogo, considerando que o n�mero a ser descoberto ser� definido dentro
	do algoritmo e n�o estar� vis�vel para o usu�rio
*/

#include <iostream>

using namespace std;

int main(){
	int numero, adivinha, cont = 1;
	while(cont <= 3){
		adivinha = 4;
		cout << "Digite um numero de 1 a 10 para ver se voce consegue adivinhar o numero secreto: ";
		cin >> numero;
		if(numero > adivinha){
			cout << endl << "Tente um numero menor!" << endl << endl;
		}else if( numero < adivinha){
			cout << endl << "Tente um numero maior!" << endl << endl;
		}else if(numero == adivinha){
			cout << endl << "PARABENS VOCE GANHOU!";
			return 0;
		}
		cont++;
	}
	cout << endl << "Suas chances acabaram, tente novamente mais tarde!";
	return 0;
}
