/*
	Fa�a um algoritmo que leia as matr�culas e as respectivas m�dias finais de v�rios alunos de uma turma, 
	at� que seja digitada uma m�dia negativa. Ao final, o algoritmo deve mostrar a quantidade de alunos 
	aprovados (m�dia >=7), reprovados (m�dia <3) ou em recupera��o. Al�m disso, o algoritmo deve mostrar 
	as matr�culas de todos os alunos que obtiveram m�dias superiores a 9
*/

#include <iostream>

using namespace std;

int main(){
	int matricula, qtdReprovados, qtdAprovados, qtdRecuperacao;
	float mediaFinal = 0, res;
	
	do{
		cout << endl << "Informe a matricula do aluno: ";
		cin >> matricula;
		cout << endl << "Informe a media do aluno: ";
		cin >> res;
		if(res >= 7 && res < 9){
			qtdAprovados ++;
		}else if( res >= 9){
			cout << endl << "O aluno de matriula " << matricula << " teve media execelente que � maior ou igual a 9!" << endl;
		}else if(res < 3 && res > 0){
			qtdReprovados ++;
		}else if(res >= 3 && res < 7 ){
			qtdRecuperacao ++;
		}
	}while(res > 0);
	
	cout << endl << " " << qtdRecuperacao;
	
	return 0;
}
