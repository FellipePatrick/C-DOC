/*
	Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das 
	informa��es n�mero de anos que ele fuma, n� de cigarros fumados por dia e pre�o de uma 
	carteira
	
	nesse codigo vou levar em considera��o, que uma carteira tem 20 cigarros
*/

#include <iostream>
using namespace std;

int main(){
	int dinheiroGasto, numeroAnos, numeroCigarrosDia, precoCarteira;
	cout <<  "A quantos anos voce fuma? " << endl << endl;
	cin >> numeroAnos;
	cout << endl << "Numero de cigarros fumados por dia: "<< endl << endl;
	cin >> numeroCigarrosDia;
	cout << endl << "Qual e preco de uma carteira de cigarro: " << endl << endl;
	cin >> precoCarteira;
	dinheiroGasto = ((numeroAnos * 365)/(numeroCigarrosDia/20)) * precoCarteira;
	cout << endl <<  "Voce gastou aproximadamente: " << dinheiroGasto << " R$";
}
