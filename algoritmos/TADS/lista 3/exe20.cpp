/*
	Elabore um algoritmo leia v�rias vezes dois n�meros inteiros quaisquer, multiplique-os sem utilizar a
	opera��o de multiplica��o e escreva o resultado. O algoritmo deve parar quando os dois n�meros
	digitados forem um positivo e o outro negativo (n�o necessariamente nesta ordem). Por exemplo: 4 * 2
	= 4 + 4
*/

#include <iostream>

using namespace std;

int main(){
	int n1, n2, soma = 0;
	do{
		cout << endl<< "Digite o primeiro numero: ";
		cin >> n1;
		cout << endl << "Digite o segundo numero: ";
		cin  >> n2;
		for(int i = 1; i <= n2; i++){
			soma += n1;
		}
		cout << endl << "O resultado da multiplica��o �: " << soma << endl;
	}while(n1 >= 0 && n2 >= 0);
	return 0;
}
