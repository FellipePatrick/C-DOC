/*
  elabore um algoritmo que simule o caixa de um supermercado. Para cada produto da compra, o algoritmo deve ler o seu c�digo, o valor
  unit�rio e a quantidade adquirida. Ap�s as informa��es do produto, o algoritmo deve mostrar o subtotal da compra e perguntar se o       
  usu�rio deseja continuar (S-sim, N-n�o). Caso o usu�rio escolha 'S', o algoritmo dever� pedir os dados do pr�ximo produto. Caso         
  escolha 'N', o algoritmo dever� informar o total da compra e a quantidade total de produtos adquiridos. Em seguida deve ler o valor     
  pago e informar se est� correto, existe troco ou est� insuficiente.
*/

#include <iostream>
using namespace std;
int main(){
  int codigoP, cont = 1, quantidade, qtdTotal;
  float valorUni, subTotal = 0, dinheiro;
  char res;
  do{
    cout << "\nInforme o codigo do Produto, valor unitario e a quantidade:\n";
    cin >> codigoP >> valorUni >> quantidade;
    for(int i = 1; i <= quantidade; i++){
        subTotal += (quantidade * valorUni);
    }
    qtdTotal = quantidade;
    cout << "\nDeseja continuar (S-sim, N-n�o)";
    cin >> res;
  }while(res == 'S');
  cout << "\nO valor pago a se pago na quantidade de itens " << qtdTotal << " �: " << subTotal << " R$";
  cout << "\nInforme o seu dinheiro: ";
  cin >> dinheiro;
  if(dinheiro < subTotal){
      cout << "\nVoc� est� devendo: " << subTotal - dinheiro << subTotal << " R$";
      return 0;
  }else if(dinheiro > subTotal){
      cout << "\nVoc� tem o troco de: " << dinheiro - subTotal << subTotal << " R$";
      return 0;
  }
  cout << "\nVoc� deu o dinheiro na continha exata!";
  return 0;
}
