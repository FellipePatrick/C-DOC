/*
	Elabore um algoritmo que leia n n�meros, calcule e escreva a soma dos n�meros lidos. O algoritmo 
	dever� finalizar quando o n�mero 0 for digitado pelo usu�rio
*/

#include <iostream>

using namespace std;

int main(){
	int numero, soma = 0;
	do{
		cout << "Digite um numero: ";
		cin >> numero;
		soma += numero;
	}while(numero != 0);
	cout << endl << "A soma de todos os numeros digitados �: " << soma;
	return 0;
}
