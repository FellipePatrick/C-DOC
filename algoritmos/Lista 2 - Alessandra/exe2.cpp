/*
	Leia um n�mero, verifique e escreva se este n�mero � par ou �mpar. Se for par, verifique e escreva se �
	maior que 100 ou n�o e se for �mpar verifique e escreva se � positivo ou negativo
*/

#include <iostream>

using namespace std;

int main(){
	int numero;
	cout << "Informe um numero: ";
	cin >> numero;
	if(numero%2 == 0){
		if (numero > 100){
			cout << endl << "O numero e par e e maior que 100" << endl;
		}else {
			cout << endl << "O numero e par e nao e maior que 100" << endl;
		}
	}else {
		if(numero < 0){
			cout << endl << "O numero e impar e e negativo" << endl;
		}else {
			cout << endl << "O numero e impar e e positivo" << endl;
		}
	}
	return 0;
}
