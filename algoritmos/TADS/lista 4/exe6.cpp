/*
	Elabore um algoritmo que leia um vetor A de 20 posi��es. Em seguida, trocar o primeiro elemento com o
	�ltimo, o segundo com o pen�ltimo, o terceiro com o antepen�ltimo, e assim sucessivamente. Ao final,
	escreva o vetor A modificado
*/

#include<iostream>
using namespace std;

int main()
{
    int A[6], vetor[6];
    for(int x = 0; x < 7; x++){
        cout << "\nInforme o valor da posicao " << x << ":";
        cin >> A[x];
        vetor[6-x] = A[x];
    }
    for(int i = 0; i < 7; i++){
        cout << "\nA[ " << A[i] << " ] || vetor[ " << vetor[i] << " ]";
    }
    return 0;
}
