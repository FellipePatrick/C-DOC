/*
	Elabore um algoritmo que leia um n�mero inteiro e escreva o seu fatorial. Ex.: Fatorial de 4 = 4! = 4 X 3 X
	2 X 1 = 24. Ap�s o fatorial, verifique e escreva o pr�ximo n�mero divis�vel pelo n�mero digitado
*/

#include <iostream>

using namespace std;

int main(){
	int n, fat = 1;
	cout << "Digite um numero: ";
	cin >> n;
	for(int i = n; 0 < i; i--){
		fat *= i;
	}
	cout << endl << "O fatorial de " << n << " �: "<< fat;
	return 0;
}
