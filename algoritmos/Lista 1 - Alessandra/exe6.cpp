/*
	O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do 
	distribuidor e dos impostos, ambos aplicados ao custo de f�brica. Supondo que a percentagem 
	do distribuidor seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de 
	f�brica de um carro e escreva o custo ao consumidor
*/

#include <iostream>
using namespace std;

int main(){
	double precoFabrica;
	cout << "Informe o custo de fabrica: ";
	cin >> precoFabrica;
	double custoConsumidor = precoFabrica + (precoFabrica * 0.28) + (precoFabrica * 0.45);
	cout << endl << "O preco que o consumidor ira pagar e: " << custoConsumidor;
}
