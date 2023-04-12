/*
	Elabore um algoritmo que leia N d�gitos num�ricos, e gere um �nico n�mero decimal. Ex: (2,3,2,0) = 2320.
*/
#include <iostream>
using namespace std;
int main(){
  int digito, final = 0, percentual = 1;
  char res;
  do{
    cout << "\nDigite um numero: ";
    cin >> digito;
    final += (digito * percentual);
    cout << "\nDeseja digitar mais algum numero(S-sim N-n�o): ";
    cin >> res;
    percentual *= 10;
  }while(res == 'S');
  cout << "\nO numero resultante �: " << final;
  return 0;
}
