/*
	Elabore um algoritmo que leia 15 n�meros reais e escreva o maior e o menor entre os n�meros lidos
*/

#include <iostream>

using namespace std;

int main(){
	int numero, maior, menor;
	cout << "Informe um numero: " << endl;
	cin >> numero;
	maior = numero;
	menor = numero;
	for(int i = 1; i <= 14; i++){
		cout << "Informe um numero: " << endl;
		cin >> numero;
		if(numero >= maior){
			maior = numero;
		}else{
			if(numero <= menor){
				menor = numero;
			}
		}
	}
	cout << "O menor numero �: " << menor << " e o maior �: " << maior;
	return 0;
}
