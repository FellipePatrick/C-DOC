/*
	Elabore um algoritmo que leia v�rios pares de dois n�meros inteiros, calcule e escreva, para cada par, o
	resultado do primeiro elevado ao segundo (sem utilizar a fun��o de pot�ncia) e a soma dos dois n�meros
	em m�dulo. Considere que o m�dulo de um n�mero representa a dist�ncia desse n�mero � origem
	(ponto zero da reta real). Exemplo: M�dulo de 9 = 9; m�dulo de -9 = 9
*/

#include <iostream>

using namespace std;

int main(){
	long int modulo = 1, n1, n2,cont = 1, res, soma;
	do{
		cout << endl << "Informe o primeiro numero: ";
		cin >> n1;
		cout << endl << "Informe o segundo numero: ";
		cin >> n2;
		if(n2 < 0){
			n2 = n2 * (-1);
		}
		for(int i = 1; i <= n2; i++){
			modulo *= n1;
		}
		soma = n1 + n2;
		cout << endl << "A soma dos numeros �: "<< soma << " e a potencia��o deles resultou em: " << modulo;
	}while(cont <= 10);
	return 0;
}
