/*
	Leia 3 n�meros inteiros e escreva uma das seguintes mensagens:
		� Todos os n�meros s�o iguais;
		� Todos os n�meros s�o diferentes;
		� Apenas dois n�meros s�o iguais. 
*/

#include <iostream>

using namespace std;

int main(){
	int n1, n2, n3;
	cout << "Digite o valor do primeiro numero: ";
	cin >> n1;
	cout << endl << "Digite o valor do segundo numero: ";
	cin >> n2;
	cout << endl << "Digite o valor do terceiro numero: ";
	cin >> n3;
	bool  todosIguais = n1 == n2 && n1 == n3 && n2 == n3;
	bool todosDiferentes =  n1 != n2 && n1 != n3 && n2 != n3;
	bool apenasDois = n1 == n2 or n1 == n3 or n2 == n3;
	if(todosIguais){
		cout << endl << "Todos os numeros s�o iguais!";
	}else if(apenasDois){
		cout << endl << "Apenas dois numeros s�o iguais!";
	}else if(todosDiferentes){
		cout << endl << "Todos os numeros s�o diferentes!";
	}else {
		cout << endl << "ERRO";
	}
	return 0;
}
