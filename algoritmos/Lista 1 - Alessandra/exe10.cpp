/*
	Leia dois valores inteiros para as vari�veis A e B e efetue as opera��es de adi��o, subtra��o, 
	multiplica��o e divis�o de A por B, apresentando ao final os resultados obtidos. Em seguida leia
	dois valores l�gicos C e D e efetue as opera��es de nega��o (de cada um dos valores), conjun��o 
	(E) e disjun��o (OU), apresentando ao final os resultados obtidos
*/

#include <iostream>

using namespace std;

int main(){
	double a, b;
	int res;
	bool c, d, negacaoC, negacaoD, conjuncao, disjuncao;
	cout << "Digite o valor de a: ";
	cin >> a;
	cout << endl << "Digite o valor de b: ";
	cin >> b;
	cout << endl << "O valor da soma e: " << a + b;
	cout << endl << "O valor da subtracao e: " << a - b;
	cout << endl << "O valor da divisao e: " << a/b;
	cout << endl << "O valor da multiplicacao e: " << a*b;
	cout << endl << "------------------------------------ PROXIMA ETAPA ------------------------------------" << endl;
	cout << endl << "Informe um valor logico para C (0 para falso e 1 para verdadeiro): ";
	cin  >> res;
	switch (res){
		case 1:
			c = true;
			break;
		case 0:
			c = false;
	}
	cout << endl << "Informe um valor logico para D (0 para falso e 1 para verdadeiro): ";
	cin  >> res;
	switch (res){
		case 1:
			d = true;
			break;
		case 0:
			d = false;
	}
	negacaoC = !c;
	negacaoD = !d;
	conjuncao = c and d;
	disjuncao = c or d;
	cout << endl << "A negacao de C: " << negacaoC << ", a negacao de D: " << negacaoD << "a conjuncao de c e d: " << conjuncao << " a disjuncao de c e d: " << disjuncao;
	return 0;
}
