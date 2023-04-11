/*
	Elabore um algoritmo que apresente um menu contendo as op��es 1-Tri�ngulo, 2-Quadrado, 3-
	Ret�ngulo, 4-Trap�zio, 5-C�rculo, 6-Sair. Em seguida, de acordo com a op��o escolhida pelo usu�rio, o
	algoritmo deve solicitar as informa��es necess�rias para c�lculo da �rea, efetuar o c�lculo e escrever o
	resultado. O algoritmo s� dever� finalizar quando o usu�rio escolher a op��o 6-Sair
*/

#include <iostream>
using namespace std;

int main() {
    int opcao;
    float area, base, altura, Base, lado;
    bool res = true;
    while(res == true){
      cout << "\n\nEscolha uma op��o: \n1-Quadrado \n2-Circulo \n3-Triangulo \n4-Retangulo \n5-Trapezio \n6-Sair: ";
      cin >> opcao;
      if(opcao >= 1 && opcao < 6){
          if(opcao == 1){
              cout << "\nDigite o valor de um dos lados: ";
              cin >> lado;
              area = lado  * lado;
              cout << "\nA area desse quadrado �: " << area;
          }else if(opcao == 3){
              cout <<"\nDigite o valor da base e da altura do triangulo: "; 
              cin >> base >> altura;
              cout << "\nO valor da area desse triangulo �: " << area;
          }else if(opcao == 2){
              cout << endl << "\nDigite o raio do circulo: ";
              cin >> base;
              area = 3.14 * (base*base);
              cout << "\nO valor da area desse circulo �: " << area;
          }else if(opcao == 4){
              cout <<"\nDigite o valor da base e da altura do triangulo: "; 
              cin >> base >> altura;
              area = base*altura;
              cout << "\nO valor da area desse retangulo �: " << area;
          }else if(opcao == 5){
              cout <<"\nDigite o valor da base maior, da base menor e da altura do trapezio: "; 
              cin >> Base >> base >> altura;
              area = ((base*Base)/2)*altura;
              cout << "\nO valor da area desse retangulo �: " << area;
          }
      }else if(opcao == 6){
          res = false;
      }
    }
    cout << "\nFim!";
    return 0;
}
