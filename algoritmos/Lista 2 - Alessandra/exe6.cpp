/*
	A escola �APRENDER� faz o pagamento de seus professores por hora/aula. Fa�a um algoritmo que calcule
	e escreva o sal�rio de um professor, sabendo que o valor da hora/aula segue a tabela abaixo:
	
	Professor n�vel 1 R$ 12,00 por hora aula
	
	Professor n�vel 2 R$ 17,00 por hora aula
	
	Professor n�vel 3 R$ 25,00 por hora aula
*/

#include <iostream>

using namespace std;

int main(){
	int nivel, horas;
	double salario;
	cout << "Digite o nivel do professor: ";
	cin >> nivel;
	cout << endl << "Digite quantas horas ele trabalha por semana: ";
	cin >> horas;
	if(nivel == 1){
		salario = 4 * (horas * 12);
		cout << endl << "O salario do professor e: " << salario << endl; 
	}else if(nivel == 2){
		salario = 4 * (horas * 17);
		cout << endl << "O salario do professor e: " << salario << endl; 
	}else if(nivel == 3){
		salario = 4 * (horas * 25);
		cout << endl << "O salario do professor e: " << salario << endl; 
	}else{
		cout << endl << "ERRO NO SISTEMA! Digite um nivel de 1 a 3" << endl;
	}
	return 0;
}
