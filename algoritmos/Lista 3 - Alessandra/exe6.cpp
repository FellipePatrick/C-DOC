/*
	Leia a idade de uma pessoa e escreva se ela j� tem idade para tirar carteira de habilita��o (18 anos
	completos) ou n�o. Se n�o tiver idade, escreva tamb�m quantos anos faltam para que possa tirar a
	carteira
*/

#include <iostream>

using namespace std;

int main(){
	int idade, falta;
	cout << "Digite sua idade: ";
	cin >> idade;
	if(idade >= 18){
		cout << endl << "Voc� tem idade para tirar carteira de habilita��o!";
	}else {
		falta = 18 - idade;
		if(falta > 1){
			cout << endl << "Voc� n�o tem idade para tirar carteira de habilita��o! Faltam " << falta << " anos";
		}else {
			cout << endl << "Voc� n�o tem idade para tirar carteira de habilita��o! Falta " << falta << " ano";
		}
	}
}
