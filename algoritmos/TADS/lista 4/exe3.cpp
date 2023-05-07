/*
	Elabore um algoritmo que leia um vetor de 15 posi��es de n�meros inteiros e pergunte ao usu�rio quais
	elementos ele deseja ver: se os elementos que est�o em �ndices pares ou se os elementos que est�o em
	�ndices �mpares. Mostre somente os elementos solicitados
*/

#include <iostream>

using namespace std;

int main(){
	int cont, vetor[5];
	char res;
	bool flag = true;
	for(cont = 0; cont < 5; cont++){
		cout << "\nDigite um valor inteiro para a posicao " <<cont<< ": ";
		cin >> vetor[cont]; 
	}
	do{
		cout << "\nQual elementos voce deseja ver (indicies p-pares ou i-impares): ";
		cin >> res;
		if(res != 'p' && res != 'i'){
			cout << "\nInforme uma opcao valida!";
		}else{
			flag = false;
		}
	}while(flag);
	if(res == 'p'){
		for(cont = 0; cont < 5; cont += 2){
			cout << "\n" << vetor[cont];
		}
	}else{
		for(cont = 1; cont < 5; cont += 2){
			cout << "\n" << vetor[cont];
		}
	}
	return 0;
}
