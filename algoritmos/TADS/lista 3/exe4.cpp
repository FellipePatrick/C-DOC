/*
	Dado um n�mero n inteiro e positivo, dizemos que n � perfeito se n for igual � soma de seus divisores 
	positivos diferentes de n. Construa um programa em C que verifica se um dado n�mero � perfeito. Ex: 6 
	� perfeito, pois 1+2+3 = 6.
*/

#include <iostream>

using namespace std;

int main(){
	int n, cont = 1;
	float somaTotal = 0;
	cout << "Digite um numero positivo: ";
	cin >> n;
	if(n < 0){
		cout << endl << "Numero invalido!";
		return 0;
	}
	while(cont < n){
		if(n%cont == 0){
			somaTotal += cont;
		}
		cont++;
	}
	if(somaTotal == n){
		cout << endl << n << " � um numero perfeito! Pois a soma dos seus divisores � igual a: " << somaTotal;
	}else if(n == 1){
		cout << endl <<  n << " � um numero perfeito! Pois a soma dos seus divisores � igual a: " << 1;
	}else{
		cout << endl <<  n << " n�o � um numero perfeito! Pois a soma dos seus divisores � igual a: " << somaTotal;
	}
	return 0;
}
