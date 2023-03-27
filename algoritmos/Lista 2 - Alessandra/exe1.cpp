/*
	Dados tr�s valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um
	tri�ngulo e, se forem, verificar e escrever se � um tri�ngulo equil�tero, is�sceles ou escalenos. Se eles
	n�o formarem um tri�ngulo, escrever esta mensagem. Considere as seguintes propriedades:
	� O comprimento de cada lado em um tri�ngulo � menor que a soma dos outros dois lados;
	� Equil�teros: tem os comprimentos dos tr�s lados iguais;
	� Is�sceles: tem os comprimentos de dois lados iguais;
	� Escaleno: tem os comprimentos dos tr�s lados diferentes
	
	obs.: n�o uso acento, pois a ide que uso DEV++ n�o consegue ler direito, n�o sou analfabeto! 
*/

#include <iostream>

using namespace std;

int main(){
	int x, y, z;
	cout << "Digite o valor para x: ";
	cin >> x;
	cout << endl << "Digite o valor para y: ";
	cin >> y;
	cout << endl << "Digite o valor para z: ";
	cin >> z;
	if(x < y + z && y < x + z && z < x + y){
		if(x != y && x!=z && y!=z){
			cout << endl << "E um triangulo escaleno"<< endl;
		}else if(x == y && x == z && z == y ){
			cout << endl << "E um triangulo Equilatero"<< endl;
		}else{
			cout << endl << "E um triangulo Isoscele"<< endl;
		}
	}else {
		cout << endl << "Nao e um triangulo"<< endl;
	}
	return 0;
}
