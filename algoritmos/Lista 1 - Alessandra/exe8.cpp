/*
	Escreva o valor em reais (R$) de um valor lido em d�lares (US$). O algoritmo dever� solicitar o 
	valor da cota��o do d�lar e tamb�m a quantidade de d�lares que o usu�rio deseja converter.
*/

#include <iostream>
using namespace std;

int main(){
	double dolar, cotacao, reais;
	cout << "Digite o valor da cotacao do dolar: ";
	cin >> cotacao;
	cout << endl << "Digite a quantidade de dolares a serem convertidos: ";
	cin >> dolar;
	reais = dolar * cotacao;
	cout << endl << "O valor da conversao em reais e: " << reais << "R$";
	return 0;
}
