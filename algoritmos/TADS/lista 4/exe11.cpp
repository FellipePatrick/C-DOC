/*
	Elabore um algoritmo que preencha automaticamente um vetor de 20 posi��es de inteiros gerando os
	elementos a partir da multiplica��o do seu �ndice por 2. Em seguida, calcule e escreva a soma dos elementos
	pares e impares
*/

#include <iostream>

using namespace std;

int main(){
	int x, vetor[20], somaP = 0, somaI = 0;
	for(x=0;x<20;x++){
		vetor[x] = x * 2;
		if(vetor[x] % 2 == 0)
			somaP += vetor[x];
		else
			somaI += vetor[x];
	}
	cout << "A soma dos pares: " << somaP << " e a soma dos impares: " << somaI;
	return 0;
}
