/*
	Elabore um algoritmo que leia um vetor V de 10 posi��es de inteiros, n�o permitindo que sejam digitados
	n�meros negativos. Em seguida, leia um n�mero inteiro qualquer e verifique se o n�mero existe no vetor. Se
	existir, informe o seu �ndice. Se n�o existir, informe a mensagem �N�mero n�o localizado!�
*/

#include <iostream>

using namespace std;

int main(){
	int v[10], n, x, indice;
	bool flag;
	for(x = 0; x < 11; x++){
		cout << "\nInforme o valor do indice " << x << ": ";
		cin >> v[x];
	}
	do{
		cout << "\nAgora digite um numero para verificar se esse existe e qual sua posicao no vetor: ";
		cin >> n;
		if(n < 0){
			cout << "\nO numero informado precisa ser positivo";
		}else
			flag = false;
	}while(flag);
	for(x = 0; x < 10; x++){
		if(v[x] == n){
			flag = true;
			indice = x ;
		}
	}
	if(flag){
		cout << "\nNumero existe e esta na posicao " << indice;
	}else{
		cout <<"\nNumero nao localizado";
	}
}
