/*
	Leia um n�mero qualquer e verifique se ele � par ou �mpar. Se o n�mero for par, escreva se � m�ltiplo 
	de 10; se for �mpar, escreva se � divis�vel por 5.
*/

#include <iostream>

using namespace std;

int main(){
	int numero;
	bool par, impar;
	cout << "Digite um numero: ";
	cin >> numero;
	par = ((numero%2)==0) ? true : false;
	if(par){
		if(numero%10 == 0){
			cout << endl << "� multiplo de 10";
		}else{
			cout << endl << "n�o � multiplo de 10";
		}
	}else{
		if(numero%5 == 0){
			cout << endl << "� multiplo de 5";
		}else{
			cout << endl << "n�o � multiplo de 5";
		}
	}
	return 0;

}
