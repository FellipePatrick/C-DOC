/*
	Crie um algoritmo que ajude o DETRAN a saber o total de recursos que foram arrecadados com a 
	aplica��o de multas de tr�nsito. O algoritmo deve ler as seguintes informa��es para cada um dos N 
	motoristas:
	- O n�mero da carteira de motorista (inteiro);
	- N�mero de multas;
	- O valor de cada uma das multas.
	Deve ser impresso o valor da d�vida de cada motorista e ao final da leitura o total de recursos arrecadados 
	(somat�rio de todas as multas). O algoritmo dever� imprimir tamb�m o n�mero da carteira do motorista 
	que obteve o maior n�mero de multas.
*/

#include <iostream>

using namespace std;

int main(){
	int numeroMotorista, resNCarteira, carteira, qtdMultas, cont = 1, resMultas = 0;
	float dividaMotorista = 0, totalRecursos = 0, valorMulta;
	cout << "Informe o numero de Motorista: ";
	cin >> numeroMotorista;
	while(cont <= numeroMotorista){
		cout << endl << "Informe o numero da Carteira: ";
		cin >> resNCarteira;
		cout << endl << "Informe a quantidade de multas: ";
		cin >> resMultas;
		if(qtdMultas < resMultas){
			carteira = resNCarteira;
			qtdMultas = resMultas;
		}
		for(int i = 1; i <= resMultas; i++){
			cout << endl << "Informe o valor da multa: ";
			cin >> valorMulta;
			dividaMotorista += valorMulta;
		}
		cout << endl << "A divida da desse motorista com o N da carteira: " << resNCarteira << " �: " << dividaMotorista << "R$" << endl;;
		totalRecursos += dividaMotorista;
		dividaMotorista = 0;
		cont ++;
	}
	cout << endl << "O total de recursos �: " << totalRecursos;
	return 0;
}
