#include <iostream>
using namespace std;

int main(){
	int numero, fat = 1;
	cout << "Digite o numero que quer ver o fatorial: ";
	cin >> numero;
	int i = numero;
	if(numero < 0){
		cout << "N�o forne�o fatorial de numero negativo!";
	}else{
		while(i > 1){
			fat *= i;
			cout << "::" << fat << endl;
			i--;
		}
		cout << endl << fat << " � o fatorial de: " << numero;
	}
}
