/*
	A nota final de um estudante e calculada a partir de tr�s notas atribu�das entre o intervalo de 0 at� 10,
	respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral e a um exame final. A m�dia
	das tr�s notas mencionadas anteriormente obedece aos pesos: Trabalho de Laborat�rio: 2; Avalia��o
	Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno est� reprovado (media
	entre 0 e 2,9), de recupera��o (entre 3 e 4,9) ou se foi aprovado
*/

#include <iostream> 

using namespace std;

int main(){
	double note1, note2, note3, average;
	cout << "type it the note of laboratory work: ";
	cin >> note1;
	cout << endl << "type it the note of semester evaluation: ";
	cin >> note2;
	cout << endl << "type it the note of final exam: ";
	cin >> note3;
	average = ((note1 * 2) + (note2 * 3) + (note3 * 5))/10;
	if(average >= 0 && average < 2.9){
		cout << endl << "this student is disapproved!";
	}else if(average >= 3 && average <= 4.9 ){
		cout << endl << "this student is recovery!";
	}else if(average >= 5 && average <= 10){
		cout << endl << "this student is approved!";
	}else{
		cout << endl << "ERROR, THIS AVEREGA IS INVALID!";
	}
	return 0;
}
