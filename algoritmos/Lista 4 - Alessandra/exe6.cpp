/*
	Escreva um algoritmo que encontre o n-�simo n�mero primo maior que 11, sendo n um n�mero
	digitado pelo usu�rio
*/

#include <iostream>
using namespace std;
int main(){
	int numero, inicial;
	float primo;
	bool res = true;
	cout << "Digite um numero: ";
	cin >> numero;
	inicial = numero;
	if(numero > 0){ 
		while(res){
			primo = numero%2;
			if(primo != 0 && numero > 11){
				cout << endl << primo;
				res = false;
			}else{
				numero++;
			}
		}
		cout << endl << "O proximo numero primo depois de " << inicial << " �: " << numero;
	}else{
		cout << endl << "Digite um numero maior que 0!";
	}
	return 0;
}
