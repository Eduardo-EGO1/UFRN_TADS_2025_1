/*9. Leia dois valores inteiros nas vari�veis Val1 e Val2, troque os seus conte�dos e escreva o
resultado. Exemplo: Se o valor lido foi 10 para a vari�vel Val1 e 11 para a vari�vel Val2, depois
da troca o algoritmo ter� que escreva Val1 = 11 e Val2 = 10.*/

#include <iostream>
using namespace std;

int main() {
	int Val1, Val2, Val3;
	cout << "DIGITE 1 NUMERO INTEIRO : ";
	cin >> Val1;
	cout << "\nDIGITE OUTRO NUMERO INTEIRO : ";
	cin >> Val2;
	
	Val3 = Val1;
	Val1 = Val2;
	Val2 = Val3;
	
	cout << "\nVALOR 1 = " << Val1 << "\nVALOR 2 = " << Val2;
	return 0;
	
}
