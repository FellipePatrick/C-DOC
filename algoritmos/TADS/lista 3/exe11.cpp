#include <iostream>
using namespace std;

int main() {
    int A, B, quociente, produto, resto;

    // l� os valores de A e B
    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B: ";
    cin >> B;

    // calcula o quociente da divis�o de A por B
    quociente = A / B;

    // calcula o produto entre B e o quociente
    produto = B * quociente;

    // calcula o resto da divis�o de A por B
    resto = A - produto;

    // exibe o resultado
    cout << "O resto da divis�o de " << A << " por " << B << " � " << resto << endl;

    return 0;
}

