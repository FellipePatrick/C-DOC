/*
	Elabore um algoritmo que leia um vetor S contendo os sal�rios dos funcion�rios de uma empresa com, no
	m�ximo, 100 funcion�rios, sendo que para terminar a entrada ser� fornecido o valor -1. Ap�s toda a entrada
	ter sido realizada, leia o valor de um reajuste. Em seguida, gere e escreva um segundo vetor R contendo todos
	os sal�rios de S j� reajustados
*/

#include <iostream>

using namespace std;

int main(){
	int n, reajuste;
	do{
		cout << "\nInforme o numero de funcionarios de 1 at� 100: ";
		cin >> n;
	}while(n < 0 && n > 100);
	int S[n];
	for(int x = 0; x < n; x++){
		S[x] = -1;
	}
	cout << "\nInforme o valor do reajuste: ";
	cin >> reajuste;
	for(int x = 0; x < n; x++){
		S[x] *= -reajuste;
		cout << "\n" << S[x] << "R$ � o salario atual";
	}
	return 0;
}
