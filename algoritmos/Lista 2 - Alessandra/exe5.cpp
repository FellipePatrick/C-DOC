/* 
	Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel de acordo com o cargo,
	conforme a tabela abaixo. Fa�a um algoritmo que leia o sal�rio e o c�digo do cargo de um funcion�rio e
	calcule o novo sal�rio. Se o cargo do funcion�rio n�o estiver na tabela, ele dever� receber 40% de
	aumento. Mostre o sal�rio antigo, o novo sal�rio e a diferen�a
*/

#include <iostream>

using namespace std;

int main(){
	int codigo;
	double salario, novoSalario, diferenca;
	cout << "Informe seu salario: ";
	cin >> salario;
	cout << endl << "Informe o codigo do cargo: ";
	cin >> codigo;
	if(codigo == 101){
		novoSalario = salario + (salario * 0.1);
		diferenca = novoSalario - salario;
		cout << endl << "Seu antigo salario era: " << salario << "R$, seu novo salario e: " << novoSalario << "R$ e a diferenca e: " << diferenca << "R$" << endl;
	}else if(codigo == 102){
		novoSalario = salario + (salario * 0.2);
		diferenca = novoSalario - salario;
		cout << endl << "Seu antigo salario era: " << salario << "R$, seu novo salario e: " << novoSalario << "R$ e a diferenca e: " << diferenca << "R$" << endl;
	}else if(codigo == 103){
		novoSalario = salario + (salario * 0.3);
		diferenca = novoSalario - salario;
		cout << endl << "Seu antigo salario era: " << salario << "R$, seu novo salario e: " << novoSalario << "R$ e a diferenca e: " << diferenca << "R$" << endl;
	}else{
		novoSalario = salario + (salario * 0.4);
		diferenca = novoSalario - salario;
		cout << endl << "Seu antigo salario era: " << salario << "R$, seu novo salario e: " << novoSalario << "R$ e a diferenca e: " << diferenca << "R$" << endl;
	}
	return 0;
}
