/*
	Calcule as ra�zes de uma equa��o de 2� grau. Observe que: 
	� x = (-b � v?)/2a, onde ? = B2 - 4ac;
	� ax2 + bx + c = 0 representa uma equa��o de 2� grau;
	� A vari�vel a tem que ser diferente de zero. Caso seja igual, escreva a mensagem �N�o � equa��o de 
	segundo grau�; 
	� Se ? < 0, n�o existe raiz real. Escreva a mensagem �N�o existe raiz�;
	� Se ? = 0, existe uma raiz real. Escreva a raiz e a mensagem �Raiz �nica�; 
	� Se ? > 0, escreva as duas ra�zes reais.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float a, b, c;
	float delta, raiz1, raiz2;
	cout << "Digite o valor de a: ";
	cin >> a;
	if(a != 0){
		cout << endl << "Digite o valor de b: ";
		cin >> b;
		cout << endl << "Digite o valor de c: ";
		cin >> c;
		delta = pow(b,2) - 4 * a * c;
		if(delta < 0){
			cout << endl << "N�o existe raiz!";
		}else{
			if(delta == 0){
				raiz1 = (-b + sqrt(delta))/(2*a);
				cout << endl << "Raiz �nica!";
			}else if(delta > 0){
				raiz1 = (-b + sqrt(delta))/(2*a);
				raiz2 = (-b - sqrt(delta))/(2*a);
				cout << endl << "Existe, duas raizes! X1 = " << raiz1 << " e x2 = " << raiz2;
			}
		}
	}else{
		cout << endl << "N�o � equa��o de segundo grau!";
	}
	return 0;
	
	
}
