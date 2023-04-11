/*
	Uma loja tem, para cada um dos seus 10 funcion�rios, uma ficha contendo a identidade, o n�mero de
	horas trabalhadas e a quantidade de dependentes do mesmo. Considerando que:
	a) A empresa paga 12 reais por hora e 40 reais por dependentes (sal�rio bruto).
	b) Sobre o sal�rio bruto s�o feitos descontos de 8,5% para o INSS e 5% para o IR (sal�rio l�quido).
	Elabore um algoritmo que leia os dados de todos os funcion�rios, calcule e escreva os sal�rios bruto
	(total) e l�quido (total � descontos) de cada funcion�rio e a identidade de todos os funcion�rios com mais
	de 3 dependentes.
*/

#include <iostream>

using namespace std;

int main(){
	int i, rg, hrT, familia = 0;
    float salarioBruto, salarioLiquido;
    for(i=1; i<=10; i++){
        cout << "\nDigite o numero da sua identidade: ";
        cin >> rg;
        cout << "\nDigite a quantidade de horas trabalhadas: ";
        cin >> hrT;
        cout << "\nDigite a quantidade de dependentes da sua renda: ";
        cin >> familia;
        salarioBruto = (12 * hrT) + (40 * familia);
        salarioLiquido = (0.085 * salarioBruto) + (0.05 * salarioBruto);
        cout << "\nO salario bruto �: " << salarioBruto << " R$ e o salario liquido �: " << salarioLiquido << " R$" << endl;
        if(familia > 3){
        	cout << "\nA identidade �: " << rg;
		}
    }
    return 0;
}

