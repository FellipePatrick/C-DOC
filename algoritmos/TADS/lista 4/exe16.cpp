/*
	Elabore um algoritmo que leia dois vetores de mesmo tamanho M e N, sendo M contendo as matr�culas dos
	alunos e N suas respectivas notas (o tamanho deve ser digitado pelo usu�rio). Calcule a m�dia de todas as
	notas de N. Escreva primeiramente o conjunto das notas maiores do que a m�dia calculada. Em seguida,
	escreva as matr�culas dos alunos cujas notas foram menores do que a m�dia
*/

#include <iostream>

using namespace std;

int main(){
	int m, n,x, mediatodas = 0, cont = 1;
	do{
		cout << "\nDigite o valor de m e n: ";
		cin >> m >> n;
	}while(m != n);
	int vetorM[m];
	int vetorN[n];
	for(x = 0; x < n; x++){
		cout << "\nA matricula e a nota do aluno, indice " << x << ": ";
		cin >> vetorM[x] >> vetorN[x];
		mediatodas += vetorN[x];
	}
	mediatodas = mediatodas / n;
	cout << "\n N | MATRICULA   | NOTAS \n\n";
	for(x=0; x < n; x++){
		if(vetorN[x] >= mediatodas){
			cout <<" "<<cont <<"   " << vetorM[x] << "        " << vetorN[x] << "\n\n";
			cont++;
		}
	}
	for(x=0; x < n; x++){
		if(vetorN[x] < mediatodas){
			cout <<" "<< cont <<"   " << vetorM[x] << "        " << vetorN[x] << "\n\n";
			cont++;
		}
	}
}
