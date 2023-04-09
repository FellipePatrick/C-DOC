/*
	Elabore um algoritmo que implemente uma calculadora real: o usu�rio digita um n�mero, depois a
	opera��o (+, -, *, /), outro n�mero, outra opera��o, outro n�mero, e assim continua at� que ele
	digite enfim o sinal �=�, quando ent�o a calculadora mostra o resultado. Exemplos: 1 + 3 � 2 / 2 = 1;
	4 � 2 / 1 + 4 = 6. O algoritmo deve resolver a express�o na ordem de digita��o
*/

#include <iostream>

using namespace std;

int main(){
	float n1, n2, total = 0;
	string  res;
	while(res!="="){
		cout <<"Informe a opera��o(+,-,*,/,=): ";
		cin >> res;
		if(res!="="){
			cout << "Digite um numero: ";
			cin >> n1;
			cout << "Digite outro numero: ";
			cin >> n2;
			if(res == "+"){
				total += n1 + n2;
			}else if( res == "-"){
				total += n1 - n2;
			}else if( res == "*"){
				total += n1 * n2;
			}else if( res == "/"){
				total += n1 / n2;
			}else{
				cout << endl << "Operador invalido!" << endl;
			}
		}
	}
	cout << "O total das opera��es que voc� realiozou, resultou em: " << total;
	return 0;
}
