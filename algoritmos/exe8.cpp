#include <iostream>
using namespace std;

int main(){
	int numero;
	cout << "Digite um numero para ser verificado:\n ";
	cin >> numero;
	if (numero > 0){
		cout << "O numero: " << numero << " � positivo";
	}else if(numero < 0){
		cout << "O numero: " << numero << " � negativo";
	}else if(numero == 0){
		cout << "O numero: " << numero << " � zero";
	}
}
