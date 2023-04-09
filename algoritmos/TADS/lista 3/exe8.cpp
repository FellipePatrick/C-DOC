/*
	Uma rainha requisitou os servi�os de um monge, o qual exigiu o pagamento em gr�os de trigo da seguinte
	maneira: os gr�os de trigo seriam dispostos em um tabuleiro de xadrez, de tal forma que a primeira casa
	do tabuleiro tivesse um gr�o, e as casas seguintes o dobro da anterior. Considere que o tabuleiro de
	xadrez � 8x8 e que o n�mero da casa varia de 1-8 para a primeira linha, de 9-16 para a segunda linha e
	assim sucessivamente. Construa um algoritmo que calcule quantos gr�os de trigo a Rainha dever� pagar
	ao monge a partir da leitura do n�mero da casa desejada.
*/

#include <iostream>

using namespace std;

int main(){
	float armazenaProduto, numero;
	cout << "Digite o numero da casa:";
	cin >> numero;
	for(int i = 0; i <= numero; i++){
		if(i == 0){
			armazenaProduto = 1;
		}else{
			armazenaProduto = 2 * armazenaProduto;
		}
	}
	cout << endl << "O valor total a pagar em graos e: " << armazenaProduto << " graos";
	return 0;
}
